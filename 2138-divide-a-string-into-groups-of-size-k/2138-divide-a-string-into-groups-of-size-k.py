class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        result = []
        n = len(s)
        if n % k != 0:
            count =(int(math.ceil(n / k)) * k) - n
            s += fill * count
        for i in range(0, n, k):
            result.append(s[i:i+k])
        return result