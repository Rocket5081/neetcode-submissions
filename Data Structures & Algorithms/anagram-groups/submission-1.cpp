class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> words;

        for(auto word : strs){
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            words[sorted].push_back(word);
        }

        vector<vector<string>> group;

        for(auto &pair: words){
            group.push_back(pair.second);
        }

        return group;
    }
};
