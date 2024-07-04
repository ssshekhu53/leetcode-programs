func mergeSimilarItems(items1 [][]int, items2 [][]int) [][]int {
    resMap := make(map[int]int)

    for i := range items1 {
        resMap[items1[i][0]] = items1[i][1]
    }

    for i := range items2 {
        resMap[items2[i][0]] += items2[i][1]
    }

    ret := make([][]int, 0)

    for k, v := range resMap {
        ret = append(ret, []int{k, v})
    }

    sort.SliceStable(ret, func(i, j int) bool {
        return ret[i][0] < ret[j][0]
    })

    return ret
}