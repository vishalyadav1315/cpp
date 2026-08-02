#include<iostream>
using namespace std;
int count(int n,int* p1){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
  *p1=count;
}
int main (){
  int a;
  cin>>a;
 int c=0;
 count(a,&c);
  cout<<c;
}