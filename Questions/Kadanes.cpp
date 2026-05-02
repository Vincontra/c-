#include<bits/stdc++.h>
using namespace std;

int main(){
  // Kadane's Algorithm
  vector<int>nums={5,4,-1,7,8};
  int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>ans){
                ans=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        cout<<ans<<endl;
  return 0;
}
