#include<iostream>
using namespace std ;
class fraction{
    public:
    int num;
    int den;
    fraction(int num,int den ){
        this->num=num;
        this->den=den;
    }
     fraction(){
      
    }
    void print (){
        cout<<num<<"/"<<den<<endl;
    }
};
fraction mul(fraction &f1,fraction &f2){
    fraction res;
    res.num=f1.num*f2.num;
    res.den=f1.den*f2.den;
    return res;
}
int main (){
        fraction f1(3,3);
         fraction f2(3,3);
         fraction ans =mul(f1,f2);
         f1.print();
         f2.print();
         ans.print();
}