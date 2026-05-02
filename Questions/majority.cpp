#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {

        int cnt=1;
        int num=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==num){
                cnt++;
            }else{
                cnt--;
                if(cnt==0){
                    num=nums[i];
                    cnt=1;
                }
            }
        }
        return num;
    }
int main(){
  vector<int>nums={2,2,1,1,1,2,2};
  cout<<majorityElement(nums)<<endl;
  return 0;
}