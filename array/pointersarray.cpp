#include<iostream>
using namespace std;
int main(){
    int* arr=new int [7];
    arr[4]=4;
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}