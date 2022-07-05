class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        base = 1
        columnNumber = 0
        for i in columnTitle[::-1]:
            columnNumber += base * (ord(i) - 65 + 1)
            base *= 26
        return columnNumber