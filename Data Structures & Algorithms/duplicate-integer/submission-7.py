class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        dup_map = {}
        for s in nums:
            if s in dup_map:
                return True;
            dup_map[s] = 1
            
        return False;
