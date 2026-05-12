class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mp = {"(": ")", "{": "}", "[": "]"}
        close_set = {')', '}', ']'}

        for c in s:
            if c in mp:  # opening bracket
                stack.append(c)
            else:  # closing bracket
                if not stack:
                    return False
                temp = stack.pop()
                if mp[temp] != c:
                    return False

        return not stack  # True if stack is empty, else False