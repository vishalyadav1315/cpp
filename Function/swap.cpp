#include<iostream>
using namespace std;
void swap(int a, int b){
    int x;
    a=a+b;
    b=a-b;
    a=a-b;
   cout<<a<<" "<<b;;
}
int main(){
  swap(8,7);
}