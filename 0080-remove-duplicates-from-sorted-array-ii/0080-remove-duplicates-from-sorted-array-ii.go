func removeDuplicates(nums []int) int {
    n := len(nums)

    if n <= 2 {
        return n
    }

    i := 2
    k := 2
    
    for ; i < n; i++ {
        if nums[k-2] != nums[i] {
            nums[k] = nums[i]

            k++
        }
    }

    return k
}