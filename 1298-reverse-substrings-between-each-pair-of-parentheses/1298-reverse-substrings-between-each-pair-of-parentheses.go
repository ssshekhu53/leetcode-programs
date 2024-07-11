func reverseParentheses(s string) string {
    splitString := strings.Split(s, "")
    st := newStack()

    for i := range splitString {
        if splitString[i] == "(" {
            st.push(i)
        } else if splitString[i] == ")" {
            start := st.pop()

            reverseString(splitString, start, i)
        }
    }

    return joinString(splitString)
}

type stack struct {
    size int
    data []int
}

func newStack() *stack {
    s := stack{}

    s.data = make([]int, 0)

    return &s
}

func (s *stack) push(data int) {
    s.data = append(s.data, data)

    s.size++
}

func (s *stack) pop() int {
    data := s.data[s.size-1]
    s.data = s.data[0:s.size-1]

    s.size--

    return data
}

func reverseString(s []string, start, end int) {
    for start < end {
        s[start], s[end] = s[end], s[start]
        
        start++
        end--
    }
}

func joinString(s []string) string {
    str := ""

    for i := range s {
        if s[i] == "(" || s[i] == ")" {
            continue
        }

        str = fmt.Sprintf("%s%s", str, s[i])
    }

    return str
}

