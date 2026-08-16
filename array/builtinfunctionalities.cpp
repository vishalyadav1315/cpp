#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    int main (){
        vector<int> v={2,4,9,5,7};   
        reverse(v.begin()+2,v.end());
        for(int ele:v) cout<<ele<<" ";
}