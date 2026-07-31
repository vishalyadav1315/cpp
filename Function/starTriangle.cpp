#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main (){
    //   int a;
    //   cin>>a;
      pattern(3);
    //   int b;
    //   cin>>b;
       pattern(4);
    //   int c;
    //   cin>>c;
     pattern(5);
}