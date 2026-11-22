#include<iostream>
using namespace std  ;
int sum(int n){
    if(n==0) return 0;
    int ans=n*(n+1)/2;
    return ans ;
}
int main (){
int n;
cin>>n;
cout<<sum(n);
}