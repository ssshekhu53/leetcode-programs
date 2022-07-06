class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        i = 0
        n = len(s)
        string = ""
        if n == 1:
            return False
        for ch in s:
            string += ch
            i += 1
            if math.ceil(n / i) == math.floor(n / i):
                temp = string * (n // i)
                if temp == s:
                    return True
            if i == n // 2:
                break
        return False