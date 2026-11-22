#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    int v=power(a,b/2);
    if(b%2==0) return v*v;
    else return v*v*a;
}
int main(){
    int a,b;
    cout<<"enter the numbers :";
    cin>>a>>b;
    cout<<power(a,b);
}   
