#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int r=0;
        for(int i=0;i<nums.size();i++){
            if (nums[abs(nums[i])]>=0){
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            }
            else{
                r=i;
            }
        }
        return  abs((nums[r]));
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
    int result = sol.findDuplicate(nums);
    cout<<result;
    return 0;
}