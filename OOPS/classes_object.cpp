#include<iostream>
using namespace std;
class student{
public:
 string name;
 int rno;
 float cgpa ;
 student(){

 }
 student(string n,int r,float c){
  name=n;
  rno=r;
  cgpa=c;
}
};
int main(){
   student x;
   x.name="aman";
   x.rno=47;
   x.cgpa=6.4;
   cout<<x.name<<" "<<x.cgpa<<" "<<x.rno<<" "<<endl;
   student y;
   y.name="ajay";
   y.rno=34;
   y.cgpa=4.5;
   cout<<y.name<<" "<<y.cgpa<<" "<<y.rno<<" "<<endl;
   student z("arvind",44,3.5);
   cout<<z.name<<" "<<z.cgpa<<" "<<z.rno<<" "<<endl;
}
