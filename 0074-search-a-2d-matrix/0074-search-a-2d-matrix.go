func searchMatrix(matrix [][]int, target int) bool {
    m := len(matrix)
    n := len(matrix[0])

    row := findRow(matrix, m, n, target)
    col := findCol(matrix[row], n, target)

    fmt.Println(row)

    if col != -1 {
        return true
    }

    return false
}

func findRow(matrix [][]int, m, n, target int) int {
    low := 0
    high := m - 1
    mid := 0

    for low <= high {
        mid = (high + low) / 2
        ele := matrix[mid][n-1]

        if ele == target {
            return mid
        } else if matrix[mid][0] <= target && target < matrix[mid][n-1] {
            return mid
        } else if ele < target {
            low = mid + 1
        } else {
            high = mid - 1
        }
    }

    return mid
}

func findCol(matrix []int, n, target int) int {
    low := 0
    high := n - 1

    for low <= high {
        mid := (high + low) / 2
        ele := matrix[mid]

        if ele == target {
            return mid
        } else if ele < target {
            low = mid + 1
        } else {
            high = mid - 1
        }
    }

    return -1
}