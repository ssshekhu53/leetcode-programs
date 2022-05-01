class NumArray:

    def __init__(self, nums: List[int]):
        self.nums = nums
        self.cumulativeSum()
    
    def cumulativeSum(self):
        self.cumulativeArr = [self.nums[0]]
        sum = self.nums[0]
        for i in range(1, len(self.nums)):
            sum += self.nums[i]
            self.cumulativeArr.append(sum)
        print(self.cumulativeArr)

    def sumRange(self, left: int, right: int) -> int:
        return (self.cumulativeArr[right] - self.cumulativeArr[left-1]) if left != 0 else self.cumulativeArr[right]
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)