class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        targetFreq = {}
        for ch in target:
            if ch not in targetFreq:
                targetFreq[ch] = 0
            targetFreq[ch] += 1
        freq = {}
        for ch in s:
            if ch not in freq:
                freq[ch] = 0
            freq[ch] += 1
        reqFreq = {}
        keys = targetFreq.keys()
        for key in keys:
            if key not in freq:
                return 0
            reqFreq[key] = freq[key] // targetFreq[key]
        count = sys.maxsize
        for key, value in reqFreq.items():
            count = min(value, count)
        return count
        