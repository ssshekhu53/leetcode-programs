class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        paragraph = paragraph.lower()
        temp = paragraph
        paragraph = ""
        for ch in temp:
            if ch.isalpha() or ch == ' ':
                paragraph += ch
            else:
                paragraph += " "
        paragraph = paragraph.split()
        freq = {}
        for word in paragraph:
            if word not in banned:
                if word not in freq:
                    freq[word] = 0
                freq[word] += 1
        return max(zip(freq.values(), freq.keys()))[1]