func peakIndexInMountainArray(nums []int) int {
    low := 0
    n := len(nums)
    high := n - 1

    for low < high {
        mid := (low + high) / 2

        if mid <= low || mid >= high {
            break
        }

        if nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1] {
            return mid
        }

        if nums[mid-1] > nums[mid] {
            high = mid
        } else {
            low = mid
        }
    }

    if nums[low] > nums[high] {
        return low
    }

    return high
}