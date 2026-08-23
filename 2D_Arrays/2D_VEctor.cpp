#include<iostream>
#include<vector>
using  namespace std;
int main (){
    vector<int> v1={1,2,3,4};
     vector<int> v2={5,5};
      vector<int> v3={7};
      vector<vector<int>> v={v1,v2,v3};
      for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
      }
}