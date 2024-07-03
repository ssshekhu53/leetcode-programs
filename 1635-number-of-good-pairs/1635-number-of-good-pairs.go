func numIdenticalPairs(nums []int) int {  
    freq := make(map[int]int)
    count := 0

    for i := range nums {
        if _, ok := freq[nums[i]]; !ok {
            freq[nums[i]] = 0
        }

        freq[nums[i]]++
    }

    for _, v := range freq {
        count += v * (v - 1) / 2
    }

    return count
}