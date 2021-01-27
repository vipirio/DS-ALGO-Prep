class Solution(object):
    def merge(self,nums1,m,nums2,n):
        if n>0:
            for i in range(0,m):
                if nums1[i]>nums2[0]:
                    last = nums1[i]
                    nums1[i]=nums2[0]
                    nums2[0]=last
                nums2 = sorted(nums2)
            for i in range(0,n):
                nums1.append(nums2[i])
            print(nums1)
        else:
            print(nums1)


if __name__ == "__main__":
    m = int(input())
    n=int(input())
    nums1 = list(map(int,input().split()))
    nums2 = list(map(int,input().split()))
    sol = Solution()
    sol.merge(nums1,m,nums2,n)