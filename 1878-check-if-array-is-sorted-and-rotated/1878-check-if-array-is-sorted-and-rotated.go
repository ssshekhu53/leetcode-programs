func check(nums []int) bool {
    dips := 0
    n := len(nums)

    for i := range n-1 {
        if nums[i] > nums[i+1] {
            dips++
        }

        if dips > 1 {
            return false
        }
    }

    if dips == 1 && nums[0] < nums[n-1] {
        return false
    }

    return true
}