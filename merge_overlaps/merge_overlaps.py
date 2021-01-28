class Solution(object):
    def merge(self, intervals):
        result = []
        intervals = sorted(intervals)
        interval_sf = intervals[0]
        for i in range(1,len(intervals)):
            if intervals[i][0]<=interval_sf[1]:
                interval_sf[1] = max(intervals[i][1],interval_sf[1])
            else:
                result.append(interval_sf)
                interval_sf = intervals[i]
        result.append(interval_sf)
        return result
            


if __name__ == "__main__":
    interval = [[2,6],[1,3],[8,10],[15,18]]
    sol = Solution()
    res = sol.merge(interval)
    print(res)