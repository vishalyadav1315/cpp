#include<iostream>
#include<climits>
using namespace std ;
int main (){
    int arr[]={1,3,2,4,5,4,4,5};
    int n=sizeof(arr)/4;
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=INT_MIN;
for(int i=0; i<n; i++){
        if(arr[i]>smax && arr[i]!=max) smax=arr[i];
    }
    cout<<max<<" "<<smax;
}