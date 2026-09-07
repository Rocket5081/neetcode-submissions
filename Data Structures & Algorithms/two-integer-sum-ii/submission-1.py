class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        front = 0
        back = len(numbers) - 1

        while front < back:
            cur = numbers[front] + numbers[back]

            if cur < target:
                front += 1
            elif cur > target:
                back -= 1
            else:
                return [front + 1, back+1]
        
        return []
            
        