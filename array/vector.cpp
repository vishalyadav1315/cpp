#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> arr(6,4);
    for(int i=0; i<arr.size(); i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5);
      arr.push_back(6);
        arr.pop_back();
          arr.push_back(9);
    for(int i=0; i<arr.size(); i++ ){
        cout<<arr[i]<<" ";
    }
}