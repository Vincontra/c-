#include<bits/stdc++.h>
using namespace std;

int sum(int n){
  return n*(n+1)/2;
}

long factorial(int n){
  long ans=1;
  for(int i=1;i<=n;i++){
    ans*=i;
  }
  return ans;
  cout<<"This is a test"<<endl; // this will never execute because it is after return statement

}

// string dtb(int n){
//   string ans="";
//   while(n>0){
//     int rem=n%2;
//     ans=(char)(rem+'0')+ans;
//     n/=2;
//   }
//   return ans;
// }

long long dtb(int n){
  long long ans=0;
  long long power=1;
  while(n>0){
    int rem=n%2;
    n/=2;
    ans+=rem*power;
    power*=10;
  }
  return ans;

}

long btd(int n){
  long ans=0;
  long pow=1;
  while(n>0){
    int digit=n%10;
    n/=10;
    ans+=digit*pow;
    pow*=2;

  }
  return ans;

}

// data modifiers
// long long int means the same as long long
// long long  

// if you want to use only one which works for all the cases then you can use long long int because it can store very large numbers and it is a standard data type in C++.

// what about signed and unsigned?
// signed means it can store both positive and negative numbers, while unsigned means it can only store positive numbers. For example, an unsigned int can store values from 0 to 4,294,967,295, while a signed int can store values from -2,147,483,648 to 2,147,483,647.    







int main() {
  // cout<<"Enter a number"<<endl;
  // int n;
  // cin>>n;
  // cout<<dtb(n)<<endl;

  // decimal to binary to decimal
  // cout<<"Enter the number"<<endl;
  // int n;
  // cin>>n;
  // // cout<<dtb(n)<<endl;
  // cout<<btd(n)<<endl;





  return 0;
}

