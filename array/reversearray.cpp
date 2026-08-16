#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int> &v){
    for(int ele:v) cout<<ele<<" ";
    cout<<endl;
}
int main (){
    vector<int> v={1,2,3,4,5,6,7};
    // fun(v);
    int i=0,j=v.size()-1,rev;
    while(i<j){
        rev=v[i];
        v[i]=v[j];
        v[j]=rev;
        i++;
        j--;
    }
    fun(v);
}