class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        charsFreq = {}
        for ch in chars:
            if ch not in charsFreq:
                charsFreq[ch] = 0
            charsFreq[ch] += 1
        count = 0
        for word in words:
            freq = {}
            for ch in word:
                if ch not in freq:
                    freq[ch] = 0
                freq[ch] += 1
            for ch in word:
                if ch not in charsFreq or freq[ch] > charsFreq[ch]:
                    break
            else:
                count += len(word)
        return count