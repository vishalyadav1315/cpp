#include<iostream>
using namespace std;
int main(){
int arr[][4]={{1,2,3,4},{2,5,4,3},{1,2,3,8}};
// for(int i=0; i<3; i++){
//     for(int j=0; j<4; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(int j=0; j<4; j++){
    for(int i=0; i<3; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}