public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        int front = 0;
        int back = numbers.Length - 1;

        while(front < back){
            int cur = numbers[front] + numbers[back];
            
            if(cur > target){
                back -= 1;
            }
            else if(cur < target){
                front += 1;
            }
            else{
                return [front + 1, back + 1];
            }
        }
        return [];
    }
}
