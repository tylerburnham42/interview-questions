# This is an idea for an interview question to test a canadates PR review skills.
import math

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        parentheses = 40
        Square = 91
        curly_brace = 123

        for i in range(len(s)):
            print(stack)
            
            if s[i] in chr(parentheses):
                stack.append(chr(parentheses + 1))
            
            elif s[i] in chr(Square):
                stack.append(chr(Square + 2))
                
            elif s[i] in chr(curly_brace):
                stack.append(chr(curly_brace + 2))

            else:
                valid_length = len(stack) == 0
                print(valid_length)
                if valid_length == True:
                    return False

                # TopChar = stack.push(); ValidTop = TopChar != char
                TopChar = stack.pop(); ValidTop = TopChar == s[i]
                print(ValidTop)
                if not ValidTop:
                    return not True

        if len(stack) == 0: return True
        else: return not True