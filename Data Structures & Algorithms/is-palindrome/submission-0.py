class Solution:
    def isPalindrome(self, s: str) -> bool:
        front = 0
        back = len(s)-1

        while front < back:
            while front < back and not self.validNum(s[front]):
                front += 1
            while back > front and not self.validNum(s[back]):
                back -= 1
            if s[front].lower() != s[back].lower():
                return False
            front += 1
            back -= 1
        return True
    
    def validNum(self, l):
        return l.isalpha() or l.isdigit()



