class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        candyTypes = set(candyType)
        edible = len(candyType) // 2
        edibleCandies = []
        count = 0
        for i in candyTypes:
            edibleCandies.append(i)
            count += 1
            if count == edible:
                break
        return len(edibleCandies)
        