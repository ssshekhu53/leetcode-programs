class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxCount = 0
        for sentence in sentences:
            maxCount = max(maxCount, len(sentence.split()))
        return maxCount