func rearrangeArray(nums []int) []int {
    n := len(nums)
    numsPos := make([]int, 0)
    numsNeg := make([]int, 0)

    for i := range nums {
        if nums[i] >= 0 {
            numsPos = append(numsPos, nums[i])
        } else {
            numsNeg = append(numsNeg, nums[i])
        }
    }

    k := 0

    for i := 0; i < n / 2; i++ {
        nums[k] = numsPos[i]
        nums[k+1] = numsNeg[i]

        k += 2
    }

    return nums
}