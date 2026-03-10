class Solution:
    def longestPrefix(self, s: str) -> str:
        n = len(s)
        prefix_func = [0] * n
        j = 0
        for i in range (1, n):
            while j > 0 and s[i] != s[j]:
                j = prefix_func[j - 1]
            if s[i] == s[j]:
                j += 1
                prefix_func[i] = j
        length = prefix_func[-1]
        return s[:length]