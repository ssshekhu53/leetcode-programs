func findRestaurant(list1 []string, list2 []string) []string {
    pos := make(map[string]int)

    for i := range list1 {
        pos[list1[i]] = i
    }

    minSum := math.MaxInt 
    res := make([]string, 0)

    for i := range list2 {
        if index, ok := pos[list2[i]]; ok {
            if i + index < minSum {
                minSum = i + index
                res = []string{list2[i]}
            } else if i + index == minSum {
                res = append(res, list2[i])
            }
        }
    }

    return res
}