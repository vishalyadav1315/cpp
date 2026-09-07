#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main (){
    vector<int> arr={1,5,2,7,4,6};
     print(arr);
    int j,n=arr.size();
    for(int i=1; i<=n-1; i++){
       j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
     print(arr);
}