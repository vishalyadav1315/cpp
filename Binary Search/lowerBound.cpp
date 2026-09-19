#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main (){
    vector<int> arr={1,3,5,6,8};
    int target=4;
     auto x= lower_bound(arr.begin(),arr.end(),target); 
   auto y= upper_bound(arr.begin(),arr.end(),target);
    cout<<(x-arr.begin())<<" "<<(y-arr.begin());
    return 0;
}