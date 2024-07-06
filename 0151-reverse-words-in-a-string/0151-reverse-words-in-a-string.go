func reverseWords(s string) string {
    words := strings.Split(strings.TrimSpace(s), " ")
    res := ""

    for i := range words {
        words[i] = strings.TrimSpace(words[i])
        if words[i] == "" {
            continue
        }

        res = words[i] + " " + res
    }

    return strings.TrimSpace(res)
}