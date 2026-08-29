class Solution:
    def shortestBeautifulSubstring(self, s: str, k: int) -> str:
        n = len(s)
        val = 0
        ones = 0
        start = 0
        min_len = n + 1
        min_val = float('inf')
        res = None

        for end, num in enumerate(s):
            if num == '1':
                val = (val << 1) | 1
                ones += 1
            else:
                val <<= 1

            # Remove excess 1's and unnecessary leading zeroes.
            while ones > k or (ones == k and s[start] == '0'):
                if s[start] == '1':
                    val -= 1 << (end - start)
                    ones -= 1
                start += 1

            if ones == k:
                length = end - start
                if length < min_len or (length == min_len and val < min_val):
                    min_len = length
                    min_val = val
                    res = (start, end)

        return s[res[0]:res[1] + 1] if res else ''