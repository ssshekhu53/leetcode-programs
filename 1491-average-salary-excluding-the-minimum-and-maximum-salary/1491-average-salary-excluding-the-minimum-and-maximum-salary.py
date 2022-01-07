class Solution:
    def average(self, salary: List[int]) -> float:
        return float(sum(salary) - (max(salary) + min(salary))) / (len(salary) - 2)