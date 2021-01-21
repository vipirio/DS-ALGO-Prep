#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        int n = nums.size();
        for(int i=0;i<n+1;i++){
           a=a+i;
        }
        return a-accumulate(nums.begin(), nums.end(), 0);
        
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
    int result = sol.missingNumber(nums);
    cout<<result;
    return 0;
}