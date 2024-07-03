func numberOfPairs(nums1 []int, nums2 []int, k int) int {
    n := len(nums1)
    m := len(nums2)
    count := 0

    for i := range n {
        for j := range m {
            if nums1[i] % (nums2[j] * k) == 0 {
                count++
            }
        }
    }

    return count
}