class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> elem;

        for(auto n : nums){
            elem[n]++;
        }

        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> prio;

        for(auto &s : elem){
            prio.push({s.second, s.first});
            if(prio.size() > k){
                prio.pop();
            }
        }
        
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(prio.top().second);
            prio.pop();
        }

        return res;
    }
};
