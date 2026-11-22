#include<iostream>
using namespace std ;
void vishal (int n){
    if(n==0) return;
    cout<<"vishal"<<endl;
    vishal(n-1);
}
int main(){
 vishal(5);
}