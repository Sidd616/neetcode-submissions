class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        op_set = {'+','-','*','/'}

        for c in tokens:
            if c in op_set:
                op2 = stack.pop()
                op1 = stack.pop()

                if(c == '+'):
                    temp = op1 + op2
                    num = int(temp)
                    stack.append(num) 
                elif(c == '-'):
                    temp = op1 - op2
                    num = int(temp)
                    stack.append(num)  
                elif(c == '*'):
                    temp = op1 * op2
                    num = int(temp)
                    stack.append(num)  
                else:
                    temp = op1/op2
                    num = int(temp)
                    stack.append(num) 
            else:
                num = int(c)
                stack.append(num) 

        return stack.pop()

                