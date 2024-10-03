func maxProfit(prices []int) int {
    lastPrice := prices[0]
    profit := 0

    for i := range prices {
        p := prices[i] - lastPrice
        if p > 0 {
            profit += p
        }

        lastPrice = prices[i]
    }

    return profit
}