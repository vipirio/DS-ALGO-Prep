class Solution:
    def missingNumber(self, nums):
        l = len(nums)
        a=0
        for i in range(0,l+1):
            a+=i
        return a-sum(nums)
if __name__ == "__main__":
    n = int(input())
    nums = list(map(int,input().split()))
    sol = Solution()
    res = sol.missingNumber(nums)
    print(res)