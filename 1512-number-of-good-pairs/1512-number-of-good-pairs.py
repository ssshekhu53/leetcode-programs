class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        freq = {}
        pairs = 0
        for x in nums:
            freq.setdefault(x, 0)
            freq[x] += 1
        for k, v in freq.items():
            pair = v * (v - 1) // 2
            pairs += pair
        return pairs
