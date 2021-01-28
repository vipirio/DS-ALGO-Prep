#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0], sum = 0;
        
        for (int n : nums) {
            if (sum < 0)
                sum = 0;
            sum += n;
            max_so_far = max(max_so_far, sum);
        }
        return max_so_far;
        
    }
};

int main (){
    int i,n,el;
    cin>>n;
    vector<int> nums;
    for (i=0;i<n;i++){
        cin>>el;
        nums.push_back(el);
    }
    Solution sol;
    int res = sol.maxSubArray(nums);
    cout<<res;
    return 0;
}