class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        result = []
        n = len(s)
        for i in range(0, n, k):
            if (i + k) >= n:
                string = s[i:]
                xs = k - len(s[i:])
                x = fill * xs
                string += x
                result.append(string)
                break
            result.append(s[i:i+k])
        return result