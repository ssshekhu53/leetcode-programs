func numWaterBottles(numBottles int, numExchange int) int {
    total := numBottles

    for numBottles >= numExchange {
        total += numBottles / numExchange

        numBottles = (numBottles / numExchange) + (numBottles % numExchange)
    }

    return total
}