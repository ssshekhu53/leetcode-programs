class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        freq = {}
        s3 = s1 + " " + s2
        s3 = s3.split()
        for word in s3:
            if word not in freq:
                freq[word] = 0
            freq[word] += 1
        result = []
        for key, value in freq.items():
            if value == 1:
                result.append(key)
        return result