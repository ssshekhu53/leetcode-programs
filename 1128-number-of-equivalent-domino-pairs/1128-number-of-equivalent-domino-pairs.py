class Solution:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        count = 0
        doms = []
        freq = {}
        for item in dominoes:
            num = str(item[0]) + str(item[1])
            if num in freq:
                freq[num] += 1
            elif num[::-1] in freq:
                freq[num[::-1]] += 1
            else:
                freq[num] = 1
        for k, v in freq.items():
            if v > 1:
                v -= 1
                count += v * (v + 1) // 2
        return count 