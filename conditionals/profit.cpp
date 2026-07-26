#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the cost price ";
    cin>>x;
    int y;
    cout<<"enter the selling price ";
    cin>>y;
    if(x<y) {
        cout<<"seller has made profit of"<<y-x;  
      }
        else cout<<"seller has made loss"<<x-y;
    }
