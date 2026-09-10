class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        trips = []
        nums.sort()

        for i, x in enumerate(nums):
            if x > 0:
                break
            if i > 0 and x == nums[i - 1]:
                continue
            
            front = i + 1;
            back = len(nums) - 1

            while front < back:
                zeroSum = x + nums[front] + nums[back]
                if zeroSum > 0:
                    back -= 1
                elif zeroSum < 0:
                    front += 1
                else:
                    trips.append([x, nums[front], nums[back]])
                    front += 1
                    back -=1
                    while nums[front] == nums[front - 1] and front < back:
                        front += 1
        return trips

    