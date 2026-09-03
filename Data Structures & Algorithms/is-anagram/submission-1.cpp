class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> searchS;
        unordered_map<char, int> searchT;
        for(int i = 0; i < s.length(); i++){
            searchS[s[i]]++;
            searchT[t[i]]++;
        }
        return searchS == searchT;
    }
};
