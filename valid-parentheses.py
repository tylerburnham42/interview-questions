class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        opens = {"(": ")", "{": "}", "[": "]"}
        closes = [")", "}", "]"]

        # Loop over each bracket in the string
        for brace in s:

            # Check if the bracket is a type of open bracket.
            if brace in opens:
                
                # Append the closing bracket
                stack.append(opens[brace])

            # If the bracket is a type of closing bracket
            elif brace in closes:
                
                # Check if the top of the stack matches the type of bracket
                if not len(stack) or brace != stack.pop():
                    return False


        # Check if the list is empty at the end.
        return len(stack) == 0
