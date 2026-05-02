#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int arr[n];
        arr[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i]=max(prices[i],arr[i+1]);
        }

        int ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-prices[i]>0){
                ans=max(ans,arr[i+1]-prices[i]);
            }
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;
    }
};

int main(){
  Solution s;
  vector<int> prices={7,1,5,3,6,4};
  cout<<s.maxProfit(prices)<<endl;
  return 0;
}

