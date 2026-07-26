#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter the first side ";
    cin>>a;
    int b;
    cout<<"enter the second side";
    cin>>b;
    int c;
    cout<<"enter th ethird side";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a) cout<<"it forms a triangle";
    else cout<<"it does not forms a triangle ";
}