#include<iostream>
using namespace std;
int main(){
    int matran[3][3];
    cout<<"Nhap vao 9 so cua ma tran 3x3";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; i++){

            cout<<matran[i][j]<<" ";
            cin>>matran[i][j];
        }
        cout<<endl;

    }
    return 0;

}