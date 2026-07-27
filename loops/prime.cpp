#include<iostream>
using namespace std ;
int main (){
  int n;
  cout<<"enter a number ";
  cin>>n;
  // int count=0;
  // for(int i=1; i<=n; i++){
  //   if(n%i==0)
  //   count++;
  // }
  // if(count>=3) cout<<"composite number";
  // else if(count==1) cout<<"neither prime nor composite";
  // else cout<<"prime";
  bool flag=false;
  for(int i=2; i<=n-1; i++){
    if(n%i==0)
    flag=true;
    break;
  }
  if(flag==true) cout<<"composite";
  else cout<<"prime";
}