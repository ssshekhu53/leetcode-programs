func minOperations(logs []string) int {
    count := 0

    for i := range logs {
        switch logs[i] {
            case "../":
            count--
            case "./":
            continue
            default:
            count++
        }

        if count < 0 {
            count = 0
        }
    }

    return count
}