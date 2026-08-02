#include<iostream>
using namespace std;
void fun(int *p1 ,int *p2){ 
   *p1=*p1+*p2;
   *p2=*p1-*p2;
   *p1=*p1-*p2;
}
int main (){
   int x;
   cin>>x;
   int y;
   cin>>y;
   fun(&x,&y);
   cout<<x<<endl<<y;
}