#include<iostream>
using namespace std;

int timNhiPhan(const int a[], int n, int x) {
    int trai = 0, phai = n - 1;
    for ( int i = 0 ; i < n; i++){
    while (trai <= phai) {
        int giua = (trai + phai) / 2;
        if (a[giua] == x) return giua;
        if (a[giua] < x) trai = giua + 1; // nua phai
        else phai = giua - 1;             // nua trai
    }
}
    return -1;
}

bool themSo(const int a[], int n, int x){
    for (int i = 0; i < n; i++){
        if (int x == a[i]){
            
        }
    }
}

int main(){
    int n,x;
    int a[100];
    cin>>n>>x;
    cout<<"Tim "<<x<<": vi tri "<<timNhiPhan(a,n,x)<<endl;
    cout<<"Them "<<x<<": "<<themSo(a,n,x)<<endl;
    cout<<"Xoa "<<x<<": "<<xoaSo(a,n,x);

    return 0;
}