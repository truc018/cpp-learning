#include<iostream>
using namespace std;

void sapXep(int a[], int &n){
    for ( int i = 0; i < n-1; i++){
        int viTriMin = i;
        for ( int j = i + 1; j < n; j++){
            if (a[j] < a[viTriMin]){
                viTriMin = j;
            }
        }
        int temp = a[i];
        a[i] = a[viTriMin];
        a[viTriMin] = temp;  
    }
}
int main(){
    int n ;
    int a[10];
    cin >> n;
    if (n < 0 || n > 10){
        return 1;
    }
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sapXep(a, n);
    for ( int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}