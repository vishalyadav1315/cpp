#include<iostream>
using namespace std;
void kartik(){
    cout<<"kartik"<<endl;
}
void duggu(){
    cout<<"duggu"<<endl;
    kartik();
}
void arya(){
    cout<<"arya"<<endl;
    kartik();
    duggu();
}
int main(){
kartik();
duggu();
arya();
}