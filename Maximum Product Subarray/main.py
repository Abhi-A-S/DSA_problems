class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res = max(nums)

        currMin, currMax = 1, 1
        
        for n in nums:
            tempMax = currMax * n
            currMax = max(n * currMax, n * currMin, n)
            currMin = min(tempMax, n * currMin, n)

            res = max(res, currMax, currMin)

        return res