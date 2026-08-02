#include<iostream>
using namespace std ;
int main (){
    int x;
    int* ptr=&x;
    int** p2=&ptr;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<p2<<endl;
}