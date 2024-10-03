func maxProfit(prices []int) int {
    buyPrice := prices[0]
    lastPrice := prices[0]
    profit := 0

    for i := range prices {
        if prices[i] < lastPrice {
            profit += lastPrice - buyPrice
            buyPrice = prices[i]
        }

        lastPrice = prices[i]
    }

    if lastPrice > buyPrice {
        profit += lastPrice - buyPrice
    }

    return profit
}