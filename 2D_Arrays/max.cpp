#include<iostream>
using namespace std;
int main (){
    int arr[3][4]={{1,2,3,4},{2,5,4,3},{1,2,3,8}};
    int max=arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]>max) 
            max=arr[i][j]; 
        }
    }
    cout<<max;
}