class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        sortedarr = sorted(list(set(arr)))  
        posarr = {}
        for i in range(len(sortedarr)):
            posarr[sortedarr[i]] = i + 1
        result = []
        for i in arr:
            result.append(posarr[i])
        return result
        