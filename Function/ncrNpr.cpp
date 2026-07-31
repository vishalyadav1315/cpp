#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1; i<=a; i++)
      fact*=i;
    return   fact;
}
int main(){
     int n;
     cout<<"enter n";
     cin>>n;
     int r;
     cout<<"enter r";
     cin>>r;
     int npr=factorial(n)/factorial(n-r);
     cout<<npr<<endl;
     int ncr=factorial(n)/factorial(r)*factorial(n-r);
     cout<<ncr;
     
}