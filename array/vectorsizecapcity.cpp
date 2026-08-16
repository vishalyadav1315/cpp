#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(4);
  cout<<v.size()<<" "<<v.capacity()<<endl;
  v.push_back(6);
  cout<<v.size()<<" "<<v.capacity()<<endl;
  v.pop_back();
  cout<<v.size()<<" "<<v.capacity()<<endl;
  v.push_back(9);
  cout<<v.size()<<" "<<v.capacity()<<endl;
// vector<int> v(3);
// v.push_back(4);
// cout<<v.size()<<" "<<v.capacity();
}