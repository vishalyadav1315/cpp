#include<iostream>
#include<vector>
using namespace std;
void print (vector<int> &arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
vector<int> arr={2,3,4,5,1};
print(arr);
int n=arr.size();
for(int i=0; i<n; i++){
 int max=arr[i],maxIdx=i;
 for(int j=i+1; j<n; j++){
    if(arr[j]>max)
   { max=arr[j];
    maxIdx=j;}
 }
 swap(arr[i],arr[maxIdx]);
}
print(arr);  
}