func subarraySum(nums []int, k int) int {
    n := len(nums)

    prefixSum := make([]int, n)

    prefixSum[0] = nums[0]

    for i := 1; i < n; i++ {
        prefixSum[i] = prefixSum[i-1] + nums[i]
    }

    mp := make(map[int]int)
    count := 0

    for _, val := range prefixSum {
        if val == k {
            count++
        }

        if v, ok := mp[val-k]; ok {
            count += v
        }

        mp[val]++
    }

    return count
}