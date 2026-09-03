class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> val;

        for(int i = 0; i < nums.size(); i++){
            val[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if(val.count(diff) && val[diff] != i){
                return {i, val[diff]};
            }
        }
        return {};
    }
};
