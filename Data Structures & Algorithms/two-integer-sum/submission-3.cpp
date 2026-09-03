class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val;

        for(int i = 0; i < nums.size(); i++){
            val[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int find = target - nums[i];

            if(val.count(find) && val[find] != i){
                return{i, val[find]};
            }
        }
        return{};
    }
};
