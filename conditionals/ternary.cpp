#include<iostream>
using namespace std ;
int main (){
    int a,b,c;
    cout<<"enter the three numbers ";
    cin>>a>>b>>c;
    int y=(a>b)?(a>c)?a:c:(b>c)?b:c;
    cout<<y;
    
}