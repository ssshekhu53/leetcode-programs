class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        keyRows = ['qwertyusiop', 'asdfghjkl', 'zxcvbnm']
        printable = []
        for word in words:
            for keyRow in keyRows:
                if set(word.lower()).issubset(set(keyRow)):
                    printable.append(word)
        return printable
        