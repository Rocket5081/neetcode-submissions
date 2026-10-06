class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for op in tokens:
            if op == '+':
                stack.append(stack.pop() + stack.pop())
            elif op == '-':
                op1, op2 = stack.pop(), stack.pop()
                stack.append(op2 - op1)
            elif op == '*':
                stack.append(stack.pop() * stack.pop())
            elif op == '/':
                op1, op2 = stack.pop(), stack.pop()
                stack.append(int(float(op2) / op1))
            else:
                stack.append(int(op))
        return stack[0]

