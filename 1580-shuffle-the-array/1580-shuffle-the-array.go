func shuffle(nums []int, n int) []int {
    res := make([]int, 2 * n)
    k := 0

    for i := 0; i < n; i++ {
        res[k] = nums[i]
        res[k+1] = nums[n+i]

        k += 2
    }

    return res
}