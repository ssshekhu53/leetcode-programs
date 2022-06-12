class Solution:
    def countElements(self, nums: List[int]) -> int:
        maxNum = max(nums)
        minNum = min(nums)
        if maxNum == minNum:
            return 0
        n = len(nums)
        return n - (nums.count(maxNum) + nums.count(minNum))