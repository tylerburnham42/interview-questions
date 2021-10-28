import math

class solution:
    def s(self, nums, t):
        
        Start = end = 0
        
        for num in nums:
            end += 1

        try:
            while(True):
                if Start <= end:
                    break
                    
                #middleNum = (end + Start) // 2
                middleNum = (end + Start - 1) // 2

                print(Start, middleNum, end)
                if nums[middleNum] == t:
                    return middleNum

                elif Start == end:
                    return -1

                elif nums[middleNum] > t:
                    end = middleNum; middleNum = 0

                else:
                    Start = middleNum + 1; middleNum = 0

                if middleNum > 1:
                    return "Error"

        except NameError as e:
            return e

        return -1