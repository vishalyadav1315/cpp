#include<iostream>
using namespace std ;
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int x=fibo(n-1)+fibo(n-2);
    return x;
}
int main (){
    int n;
    cout<<"entre a number ";
    cin>>n;
    cout<<fibo(n);
}