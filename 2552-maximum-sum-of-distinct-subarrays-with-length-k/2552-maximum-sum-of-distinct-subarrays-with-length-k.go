func maximumSubarraySum(nums []int, k int) int64 {
    m := make(map[int]int)
    maxSum := int64(0)
    start := 0
    n := len(nums)

    subArraySum := make([]int64, n)
    subArraySum[0] = int64(nums[0])

    for i := 1; i < n; i++  {
        subArraySum[i] = subArraySum[i-1] + int64(nums[i])
    }

    fmt.Println(subArraySum)

    for i := 0; i < n; i++ {
        if j, ok := m[nums[i]]; ok {
            for start <= j {
                delete(m, nums[start])

                start++
            }

            m[nums[i]] = i

            continue
        }

        m[nums[i]] = i

        fmt.Println(i - start + 1, start, i)

        if i - start + 1 == k {
            var preSum int64

            if start != 0 {
                preSum = subArraySum[start-1]
            }

            fmt.Println(maxSum, start, i, preSum)

            maxSum = max(maxSum, subArraySum[i] - preSum)

            delete(m, nums[start])

            start++
        }
    }

    return maxSum
}

func max(a, b int64) int64 {
    if a > b {
        return a
    }

    return b
}