class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        #numSet = set(numbers)

        mp = {}

        for i,num in enumerate(numbers):
            mp[num] = i +1

        for num in numbers:
            diff = target - num

            if diff in mp:
                return [mp[num], mp[diff]]
            
        
        return []