#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr={10,20,30,40,50};
int tar=30;
int low=0;
int high=arr.size()-1;
while(low<high){
  if(tar<arr[low]+arr[high]){
    high--;
  }
  else if(tar>arr[low]+arr[high]){
    low++;
  }
  else{
    cout<<"Target found"<<endl;
    cout<<low<<" "<<high<<endl;
    break;
  }
}

  return 0;

}