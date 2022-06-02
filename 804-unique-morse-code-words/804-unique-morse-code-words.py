class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morseCode = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        morseCodes = []
        for word in words:
            code = ""
            for ch in word:
                code += morseCode[ord(ch)-97]
            morseCodes.append(code)
        return len(set(morseCodes))