class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for c in s:
            if c in ('(', '{', '['):
                stack.append(c);
            if c in (')', '}', ']'):
                if stack:
                        top = stack[-1]
                else:
                    top = None
                if c == ')' and top == '(':
                    stack.pop()

                elif c == ']' and top == '[':
                    stack.pop()

                elif c == '}' and top == '{':
                    stack.pop()

                else:
                    return False

        return len(stack) == 0