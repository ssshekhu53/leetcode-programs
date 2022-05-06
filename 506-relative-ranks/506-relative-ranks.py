class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        ranks = {}
        rankedScore = sorted(score, reverse=True)
        for i in range(len(rankedScore)):
            ranks[rankedScore[i]] = i + 1
        answer = []
        for i in score:
            if ranks[i] == 1:
                answer.append('Gold Medal')
            elif ranks[i] == 2:
                answer.append('Silver Medal')
            elif ranks[i] == 3:
                answer.append('Bronze Medal')
            else:
                answer.append(str(ranks[i]))
        return answer