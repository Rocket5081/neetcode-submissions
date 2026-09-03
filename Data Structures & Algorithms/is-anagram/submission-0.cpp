class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> test1;
        unordered_map<char, int> test2;

        for(int i = 0; i < s.length(); i++){
            test1[s[i]]++;
            test2[t[i]]++;
        }

        return test1 == test2;
    }
};
