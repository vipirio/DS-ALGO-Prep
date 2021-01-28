class Solution(object):
    def maxSubarr(self,nums):
        print(nums)
        max_so_far=nums[0]
        sum=0
        for n in nums:
            if sum < 0:
                sum = 0
            sum += n
            max_so_far = max(max_so_far, sum)
        return max_so_far


if __name__ == "__main__":
    nums = [-2,1,-3,4,-1,2,1,-5,4]
    sol = Solution()
    res = sol.maxSubarr(nums)
    print(res)