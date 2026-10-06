#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> brackets = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c : s){
            if (brackets.count(c)){
                if(!stack.empty() && stack.top() == brackets[c]){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
