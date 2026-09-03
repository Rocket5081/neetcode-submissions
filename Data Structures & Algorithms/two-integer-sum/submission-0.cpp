class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> list;

        for(int i = 0; i < nums.size(); i++){
            list[nums[i]] = i;
        }

        for(int j = 0; j < nums.size(); j++){
            int dif = target - nums[j];
            if(list.count(dif) && list[dif] != j){
                return {j, list[dif]};
            }
        }
        return {};
    }
};
