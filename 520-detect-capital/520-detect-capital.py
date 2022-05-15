class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word.upper() == word or word.lower() == word:
            return True
        i = 0
        for ch in word:
            if ch.isupper() and i != 0:
                return False
            i += 1
        return True