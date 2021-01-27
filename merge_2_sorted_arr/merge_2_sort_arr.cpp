#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last;
        if (n==0){
            for(int i=0;i<n;i++){
            cout<<nums1[i]<<" ";
        }
        
        }
        else{
        for (int i=0; i<m;i++){
           if(nums1[i]>nums2[0]){
               last = nums1[i];
               nums1[i]=nums2[0];
               nums2[0]=last;
           }
           sort(nums2.begin(), nums2.end());
       }
        for(int i=0;i<n;i++){
            nums1[i+m]=nums2[i];
        }
        for(int i=0;i<n+m;i++){
            cout<<nums1[i]<<" ";
        }
        
        }
    }
};

int main (){
    int i,n,m,el;
    cin>>m;
    cin>>n;
    vector<int> nums1;
    vector<int> nums2;
    for (i=0;i<n;i++){
        cin>>el;
        nums1.push_back(el);
    }
    for (i=0;i<m;i++){
        cin>>el;
        nums2.push_back(el);
    }
    Solution sol;
    sol.merge(nums1,m,nums2,n);
    return 0;
}