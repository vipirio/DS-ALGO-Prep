class Solution(object):
    def sort012(self,nums):
        c0=0
        c1=0
        c2=0
        for i in range(0,len(nums)):
            if (nums[i]==0):
                c0+=1
            elif (nums[i]==1):
                c1+=1
            else:
                c2+=1
        i=0
        while (c0>0):
            nums[i]=0
            i+=1
            c0-=1
        while (c1>0):
            nums[i]=1
            i+=1
            c1-=1
        
        while (c2>0):
            nums[i]=2
            i+=1
            c2-=1
        return nums

if __name__ == "__main__":
    n = int(input())
    nums = list(map(int,input().split()))
    sol = Solution()
    res = sol.sort012(nums)
    print(res)