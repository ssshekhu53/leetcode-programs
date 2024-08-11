func calculateTax(brackets [][]int, income int) float64 {
    tax := float64(0)
    lower := 0

    for i := range brackets {
        percent := float64(brackets[i][1]) * 0.01
        if income <= brackets[i][0] {
            tax += percent * float64(income - lower)

            break
        }

        tax += percent * float64(brackets[i][0] - lower)
        lower = brackets[i][0]
    }

    return tax
}