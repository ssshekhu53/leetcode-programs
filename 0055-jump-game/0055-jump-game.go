func canJump(nums []int) bool {
    n := len(nums)

    if n == 1 {
        return true
    }

    d := 0
    res := true

    for i := n - 2; i >= 0; i-- {
        d += 1
        fmt.Println(d, nums[i])

        if nums[i] == 0 {
            res = false

            continue
        }

        if nums[i] >= d {
            res = true
            d = 0
        }
    }

    return res
}