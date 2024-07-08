func totalMoney(n int) int {
    weeks := n / 7
    days := n % 7

    if weeks < 1 {
        return (days * (days + 1)) / 2
    }

    total := (((28 * 2) + (7 * (weeks - 1))) * weeks) / 2
    sum := (days * ((2 * (weeks + 1)) + (days - 1))) / 2

    fmt.Println(total, sum, days, weeks)

    return total + sum
}