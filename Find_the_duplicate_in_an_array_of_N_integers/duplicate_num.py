class Solution(object):
    def findDuplicateNum(self,nums):
        for i in range(0,len(nums)):
            if nums[abs(nums[i])]>=0:
                nums[abs(nums[i])] = -nums[abs(nums[i])]
            else:
                r = abs(nums[i])
                break
        return r

if __name__ == "__main__":
    n = int(input())
    nums = list(map(int,input().split()))
    sol = Solution()
    res = sol.findDuplicateNum(nums)
    print(res)