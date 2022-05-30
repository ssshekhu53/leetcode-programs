class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        n = len(emails)
        for i in range(n):
            email = emails[i]
            local_name, domain = email.split('@')
            temp_local_name = ""
            for ch in local_name:
                if ch == '+':
                    break
                if ch != '.':
                    temp_local_name += ch
            email = temp_local_name + '@' + domain
            emails[i] = email
        return len(set(emails))