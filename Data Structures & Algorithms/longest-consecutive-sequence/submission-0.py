class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        cons_map = defaultdict(int)
        length = 0

        for n in nums:
            if not cons_map[n]:
                cons_map[n] = cons_map[n - 1] + cons_map[n + 1] + 1
                cons_map[n - cons_map[n - 1]] = cons_map[n]
                cons_map[n + cons_map[n + 1]] = cons_map[n]
                length = max(length, cons_map[n])

        return length;
