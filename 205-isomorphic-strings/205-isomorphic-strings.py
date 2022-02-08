class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) == len(t) and len(set(s)) == len(set(t)):
            S = ""
            dict1 = {}
            dict2 = {}
            for i in range(len(s)):
                if s[i] not in dict1 and t[i] not in dict2:
                    dict1[s[i]] = t[i]
                    dict2[t[i]] = s[i]
                    S += t[i]
                elif dict1[s[i]] == t[i] and dict2[t[i]] == s[i]:
                    S += t[i]
            return S == t
        return False