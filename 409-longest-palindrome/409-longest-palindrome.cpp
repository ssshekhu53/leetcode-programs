class Solution:
    def longestPalindrome(self, s: str) -> int:
        freq = {}
        for ch in s:
            if ch not in freq:
                freq[ch] = 0
            freq[ch] += 1
        palindromeLength = 0
        maxOdd = [-1, 0]
        for k, v in freq.items():
            if v % 2 !=0:
                if v > maxOdd[1]:
                    maxOdd[0] = k
                    maxOdd[1] = v
            else:
                palindromeLength += v
        for k, v in freq.items():
            if v % 2 != 0:
                if k == maxOdd[0]:
                    palindromeLength += v
                else:
                    palindromeLength += (v - 1)
        return palindromeLength