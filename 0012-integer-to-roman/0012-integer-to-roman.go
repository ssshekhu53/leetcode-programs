func intToRoman(num int) string {
    symbols := map[int]string {
        1: "I",
        5: "V",
        10: "X",
        50: "L",
        100: "C",
        500: "D",
        1000: "M",
    }

    base := 1000
    roman := ""

    for num > 0 {
        r := num / base
         
        switch r {
            case 4, 9:
                roman += fmt.Sprintf("%s%s", symbols[base], symbols[base * (r + 1)])
            default:
                if r >= 5 {
                    roman += symbols[base * 5]
                    r -= 5
                }
                
                for r > 0 {
                    roman += symbols[base]

                    r--
                }
        }

        num %= base
        base /= 10
    }

    return roman
}