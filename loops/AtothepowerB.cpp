#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter a  ";
    cin>>a;
    int b;
    cout<<"enter b";
    cin>>b;
    int ans=1;
    for(int i=1; i<=b; i++){
        if(a==1) break;
        ans*=a;
    }
    cout<<ans;
}