func findMin(nums []int) int {
    i := 0
    j := len(nums) - 1

    if nums[i] <= nums[j] {
        return nums[i]
    }

    for i < j {
        mid := (i + j) / 2
        
        if nums[mid] >= nums[i] && nums[mid] > nums[j] {
            i = mid + 1
        } else if nums[mid] < nums[i] && nums[mid] <= nums[j] {
            j = mid
        } else {
            break
        }
    }

    return nums[i]
}