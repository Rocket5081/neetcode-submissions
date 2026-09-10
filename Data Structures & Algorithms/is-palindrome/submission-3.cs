public class Solution {
    public bool IsPalindrome(string s) {
        int front = 0;
        int back = s.Length - 1;

        s = s.ToLower();

        while(front < back){
            while(front<back && !char.IsLetterOrDigit(s[front])){
                front++;
            }
            while(back > front && !char.IsLetterOrDigit(s[back])){
                back--;
            }
            
            if(s[front] != s[back]){
                return false;
            }
            front++;
            back--;
        }
        return true;
    }
}
