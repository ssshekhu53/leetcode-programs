func simplifyPath(path string) string {
    paths := strings.Split(path, "/")
    pathStack := make([]string, 0)

    for i := range paths {
        switch paths[i] {
            case "..":
                pathStack = pop(pathStack)
            case ".", "":
                continue
            default:
                pathStack = append(pathStack, paths[i])
        }
    }

    return "/" + strings.TrimRight(strings.Join(pathStack, "/"), "/")
}

func pop(arr []string) []string {
    n := len(arr)
    if n == 0 {
        return arr
    }

    return arr[0:n-1]
}