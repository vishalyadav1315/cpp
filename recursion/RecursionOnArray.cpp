#include<iostream>
#include<vector>
using namespace std;
void printrec(vector<int> &arr, int idx){
    if(idx==arr.size()) return ;
    cout<<arr[idx]<<" ";
    printrec(arr,idx+1);
}
int main(){
    vector<int> arr={1,4,3,7,66,77};
    printrec(arr,0);
}
