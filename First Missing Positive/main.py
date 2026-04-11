class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)

        for i in range(n):
            if nums[i] < 0:
                nums[i] = 0

        for i in range(n):
            val = abs(nums[i]) - 1
            if 0 <= val < n:
                if nums[val] > 0:
                    nums[val] *= -1
                elif nums[val] == 0:
                    nums[val] = -1 * (n+1)

        for i in range(n):
            if nums[i] >= 0:
                return i+1
        
        return n + 1