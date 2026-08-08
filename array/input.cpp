#include<iostream>
using namespace  std ;
int main (){
int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter the elements in  array ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
for(int i=0; i<=n-1; i++){
    // if(arr[i]<0)
        cout<<arr[i]<<" ";
    }
}