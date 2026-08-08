#include<iostream>
using namespace std; 
int main (){
int n;
 cin>>n;
 int arr[n]={1,2,3,4,4,5,6};
int min=arr[0];
    for(int i=0; i<=n-1; i++){
     if(arr[i]<min)
     min=arr[i]; 
  }
    cout<<min;
}