#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        // pehle we need to convert this n to decimal
        long long N=n;
        double ans=1;
        double pow=x;
        if(N==INT_MIN&&x==1){
            return 1.0;
        }
        if(N<0){
            N=-N;
            while(N>0){
            int digit=N%2;
            N/=2;
            if(digit==1){
                ans*=pow;
            }
            pow*=pow;
          }
          return (1.0/ans);

        }
        else{
            while(N>0){
            int digit=N%2;
            N/=2;
            if(digit==1){
                ans*=pow;
            }
            pow*=pow;
          }
           return ans;
        }
    }
};


int main(){
  Solution s;
  cout<<s.myPow(2.00000,10)<<endl;
  return 0;
}
