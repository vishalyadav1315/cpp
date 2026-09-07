#include<iostream> 
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={1,2,4,3,5,6};
    int k=5;
    int n=arr.size();
    print(arr);
    for(int i=1; i<n; i++){
        int j=i;
        while(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    print(arr);
    cout<<arr[k-1];
}