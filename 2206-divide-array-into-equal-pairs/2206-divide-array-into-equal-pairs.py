class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        freq = {}
        for x in nums:
            if x not in freq:
                freq[x] = 0
            freq[x] += 1
        # print(freq)
        for key, value in freq.items():
            print(key, ": ", value)
            if value % 2 != 0:
                return False
        return True