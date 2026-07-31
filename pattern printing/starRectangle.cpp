#include<iostream>
using namespace std ;
int main (){
  int n;
  cout<<"enter the rows ";
  cin>>n;
  int m;
  cout<<"enter the column ";
  cin>>m;
   for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
     cout<<"* ";
       }
     cout<<endl;
   }
}