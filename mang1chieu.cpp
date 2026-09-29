#include<iostream>
using namespace std;
#define MAX 100
void hoanvi(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
bool laNguyenTo(int num){
    if (num < 2){
        return false;
    }
    for ( int i = 0; i < num; i++){
        if (num % i == 0){
            return false;
        }
    return true;
    }
}
int main(){
    int mang[MAX];
    int n;
    cout<<"Nhap vao n: ";
    cin>>n;
    cout<<"Nhap vao "<<n<<" so:";
    for (int i = 0; i < n; i++){
        cin>>mang[i];
    }
    int tong=0, gtnn=mang[0], gtln=mang[0];
    for (int i=0;i<n;i++){
        tong+=mang [i];
    gtnn = gtnn > mang[i] ? mang[i] : gtnn;
    gtln = gtln < mang[i] ? mang[i] : gtln;
    }
    cout<<"Tong la: "<<tong<<endl;
    cout<<"Gia tri lon nhat la: "<<gtln<<endl; 
    cout<<"Gia tri nho nhat la: "<<gtnn<<endl; 
    cout<<"Ban muon tim so nao: "; 
    int soCanTim;
    cin>>soCanTim;
    int vitri = -1;
    for (int i = 0; i < n; i++){
        if (mang[i] == soCanTim){
            vitri = i;
            break;

        }
    }
    if (vitri != 1){
        cout<<"Tim thay so "<<soCanTim<<" tai vi tri "<<vitri<<endl;

    }
    else {
        cout<<"Khong tim thay so"<<soCanTim<<" trong mang tren"<<endl;

    }
    for ( int i = 0; i < n-1; i++){
        for (int j = n+1; j < n; j++){
            if (mang[i] > mang[j]){
                hoanvi(mang[i],mang[j]);
            }
        }
    }
    cout<<"Mang da sap xep: ";
    for (int i = 0; i < n; i++){
        cout<<mang[i]<<" ";
    cout<<endl;
    }
    cout<<"Cac so nguyen to trong mang: ";
    for (int i = 0; i < n; i++){
        if (laNguyenTo(mang[i]){
            cout<<mang[i]<<" ";
        }
    return true; 
    }
    cout<<endl;
    return 0;
}