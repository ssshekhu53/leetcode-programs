func kthDistinct(arr []string, k int) string {
    uniqueChars := make(map[string]int)

    for i := range arr {
        uniqueChars[arr[i]]++
    }

    for i := range arr {
        if uniqueChars[arr[i]] == 1 {
            if k == 1 {
                return arr[i]
            }

            k--
        }
    }

    return ""
}