import "math"

func maxSubArray(nums []int) int {
    maxSum := math.MinInt
    sum := 0

    for i := range nums {
        sum += nums[i]
        maxSum = max(maxSum, sum)

        if sum < 0 {
            sum = 0
        }
    }

    return maxSum
}

func max(a, b int) int {
    if a > b {
        return a
    }

    return b
}