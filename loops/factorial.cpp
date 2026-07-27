#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int fact=1;
    // while(n!=0){
    //   fact=fact*n;
    //   n--;
    // }
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    cout<<fact;
}