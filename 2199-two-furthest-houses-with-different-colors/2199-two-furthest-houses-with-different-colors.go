func maxDistance(colors []int) int {
    leftDist := math.MinInt
    rightDist := math.MinInt

    n := len(colors)
    i := 1
    j := n - 2
    last := n - 1

    for i < n {
        if colors[i] != colors[0] {
            leftDist = max(i, leftDist)
        }

        if colors[j] != colors[last] {
            leftDist = max(abs(j - last), leftDist)
        }

        i++
        j--
    }

    return max(leftDist, rightDist)
}

func max(a, b int) int {
    if a > b {
        return a
    }

    return b
}

func abs(n int) int {
    if n < 0 {
        n *= -1
    }

    return n
}