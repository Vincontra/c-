#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {

        int ans=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int a=height[i];
            int b=height[j];
            ans=max(ans,min(a,b)*(j-i));

            if(a<b){
                i++;
            }
            else{
                j--;
            }

        }
        return ans;
    }
};


int main(){
  Solution s;
  vector<int>height={1,8,6,2,5,4,8,3,7};
  cout<<s.maxArea(height)<<endl;
  return 0;
}




