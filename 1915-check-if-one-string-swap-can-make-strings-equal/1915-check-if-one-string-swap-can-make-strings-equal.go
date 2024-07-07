func areAlmostEqual(s1 string, s2 string) bool {
    diff := make([][]int32, 0)

    for i := range s1 {
        if s1[i] != s2[i] {
            diff = append(diff, []int32{int32(s1[i]), int32(i)})
        }
    }

    if len(diff) > 2 {
        return false
    } else if len(diff) == 0 {
        return true
    }else if len(diff) == 2 && diff[0][0] == int32(s2[diff[1][1]]) && diff[1][0] == int32(s2[diff[0][1]]) {
        return true
    }

    return false
}