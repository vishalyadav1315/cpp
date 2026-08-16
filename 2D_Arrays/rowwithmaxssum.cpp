#include<iostream>
#include<climits>
using namespace std;
int main (){
    int arr[3][4]={{9,2,3,4},{2,5,4,3},{2,2,3,8}};
   int maxrOw=-1,maxsum=INT_MIN;
    for(int i=0; i<3; i++){
  int sum=0;
  for(int j=0; j<4; j++){
    sum+=arr[i][j];
  }
  if(sum>maxsum){
    maxsum=sum;
    maxrOw=i;
  }
    }
    cout << maxrOw<<" "<<maxsum;
}