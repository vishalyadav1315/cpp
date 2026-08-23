#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int m;
    cout<<"enter the number of rows ";
    cin>>m;
    int n;
    cout<<"enter the number of column ";
    cin>>n;
    // vector<int> v(m,0);
    vector<vector<int>> v(m,vector<int>(n,0));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}