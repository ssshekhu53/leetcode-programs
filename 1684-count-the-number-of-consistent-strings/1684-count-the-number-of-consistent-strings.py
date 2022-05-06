class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allowed = set(allowed)
        count = 0
        for word in words:
            intsct = set(word).intersection(allowed)
            if set(word) == intsct:
                count += 1
        return count
        