func sumOfUnique(nums []int) int {
    freq := make(map[int]int)

    for _, n := range nums {
        freq[n] += 1
    }

    sum := 0

    for k, v := range freq {
        if v == 1 {
            sum += k
        }
    }

    return sum
}