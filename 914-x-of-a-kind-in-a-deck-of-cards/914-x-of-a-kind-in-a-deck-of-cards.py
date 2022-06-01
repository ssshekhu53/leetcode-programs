class Solution:
    def hasGroupsSizeX(self, deck: List[int]) -> bool:
        freq = {}
        for x in deck:
            if x not in freq:
                freq[x] = 0
            freq[x] += 1
        prevCount = freq[deck[0]]
        for x in deck:
            if freq[x] < 2 or (freq[x] != prevCount and math.gcd(freq[x], prevCount) < 2):
                return False
            prevCount = freq[x]
        return True
            
            