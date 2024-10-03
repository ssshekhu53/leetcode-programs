func merge(intervals [][]int) [][]int {
    sort.Slice(intervals, func(i, j int) bool {
        if intervals[i][0] == intervals[j][0] {
            return intervals[i][1] < intervals[j][1]
        } 

        return intervals[i][0] < intervals[j][0]
    })

    resIntervals := make([][]int, 0)
    start, end := intervals[0][0], intervals[0][1]

    for i := range intervals {
        if start <= intervals[i][0] && intervals[i][0] <= end {
            end = max(intervals[i][1], end)
        } else {
            resIntervals = append(resIntervals, []int{start, end})

            start = intervals[i][0]
            end = intervals[i][1]
        }
    }

    resIntervals = append(resIntervals, []int{start, end})

    return resIntervals
}

func max(a, b int) int {
    if a > b {
        return a
    }

    return b
}