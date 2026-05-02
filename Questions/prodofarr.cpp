#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pfx(n);
        vector<int>sfx(n);
        pfx[0]=nums[0];;
        for(int i=1;i<nums.size();i++){
            pfx[i]=(pfx[i-1]*nums[i]);
        }

        sfx[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            sfx[i]=(sfx[i+1]*nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            if(i==0){
                nums[i]=sfx[i+1];
            }
            else if(i==n-1){
                nums[i]=pfx[n-2];
            }
            else{
                nums[i]=pfx[i-1]*sfx[i+1];
            }
        }
        return nums;

    }
};

int main(){
  Solution s;
  vector<int>val={1,2,3,4};
  vector<int>ans=s.productExceptSelf(val);
  for(int i:ans){
    cout<<i<<" ";
  } 
  return 0;
}
