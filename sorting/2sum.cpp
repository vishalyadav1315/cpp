#include<iostream>
#include<vector>
using namespace std ;
int main (){
    vector<int> arr={1,4,3,2,5};
    int n=arr.size();
    int target =7;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target)
           { cout<<arr[i]<<" "<<arr[j];
            return 0;}
        }
    }
}