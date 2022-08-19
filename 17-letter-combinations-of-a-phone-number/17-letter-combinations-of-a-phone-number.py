class Solution:
    result = []
    def permutation(self, ch, digits, keys):
        ans = ''
        if len(digits) == 1:
            for l in keys[digits[0]]:
                Solution.result.append(ch+l)
        else:
            letters = keys[digits[0]]
            for l in letters:
                self.permutation(ch+l, digits[1:], keys)
        
    def letterCombinations(self, digits: str) -> List[str]:
        keys = {
            '2': 'abc',
            '3': 'def',
            '4': 'ghi',
            '5': 'jkl',
            '6': 'mno',
            '7': 'pqrs',
            '8': 'tuv',
            '9': 'wxyz'
        }
        Solution.result = []
        if len(digits) == 0:
            return Solution.result
        elif len(digits) == 1:
            for l in keys[digits[0]]:
                Solution.result.append(l)
            return Solution.result
        for l in keys[digits[0]]:
            self.permutation(l, digits[1:], keys)
        return Solution.result
        
        