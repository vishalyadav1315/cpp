#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number ";
    cin>>n;
if(n%5==0) cout<<"kartikey";
else if(n%3==0) cout<<"sakshi";
else if(n%5==0 && n%3==0) cout<<"anuj";
else  cout<<"hitesh";
}