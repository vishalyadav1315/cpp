#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(char j=97; j<=n+96; j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}