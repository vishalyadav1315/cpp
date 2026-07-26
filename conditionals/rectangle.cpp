#include<iostream>
using namespace std ;
int main (){
    int l ;
    cout<<"enter the length ";
    cin>>l;
    int b;
  cout<<"enter the breadth";
  cin>>b;
  int area =l*b;
  int perimeter = 2*(l+b);
  if(area<perimeter) cout<<"the area is less than the perimeter ";
  else cout<<"the area is greater than perimeter ";
}