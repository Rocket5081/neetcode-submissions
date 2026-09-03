class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> elem;

        for(auto n : nums){
            elem[n]++;
        }

        priority_queue<tuple<int, int>> prio;

        for(auto &s : elem){
            prio.push(make_tuple(s.second, s.first));
        }
        
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(get<1>(prio.top()));
            prio.pop();
        }

        return res;
    }
};
