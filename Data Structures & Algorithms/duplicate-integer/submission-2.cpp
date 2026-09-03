class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> search;

        for(int num:nums){
            if(search.count(num)){
                return true;
            }
            search.insert(num);
        }
        return false;
    }
};
