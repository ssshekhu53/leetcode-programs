func arithmeticTriplets(nums []int, diff int) int {
    count := 0
    n := len(nums)

    numsMap := make(map[int]int)

    for i := range nums {
        numsMap[nums[i]] = i
    }

    for i := range n-2 {
        _, jOk := numsMap[nums[i] + diff]
        _, kOk := numsMap[nums[i] + (diff * 2)]

        if jOk && kOk {
            count++
        }
    }

    return count
}