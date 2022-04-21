class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = list(set(nums))
        if len(nums) >= 3:
            nums.sort()
            nums.reverse()
            return nums[2]
        else:
            nums.sort()
            return nums[-1]
        