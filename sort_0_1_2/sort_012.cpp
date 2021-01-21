
#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int sort012(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for (int i=0; i<nums.size();i++){
            if (nums[i]==0)
                c0++;
            else if (nums[i]==1)
            c1++;
            else c2++;
        }
        int i=0;
        while (c0>0){
            nums[i++]=0;
            c0--;
        }
        while (c1>0){
            nums[i++]=1;
            c1--;
        }
        while (c2>0){
            nums[i++]=2;
            c2--;
        }
        return 0;
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
    sol.sort012(nums);

    for(i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}