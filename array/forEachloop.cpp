#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v={1,2,3,4};
    for(int i=0; i<v.size(); i++){
      if(v[i]%2==0) v[i]*=2;
      else v[i]*=v[i];
    }
//    for(int ele:v){
//        if(ele%2==0) ele*=2;
//        else ele*=ele;
//     }
    for(int ele:v) 
        cout<<ele<<" ";
    
} 