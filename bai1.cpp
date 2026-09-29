#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double trungBinh(const int a[], int n) {
    if (n <= 0) return 0.0;

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum / n;
}

int viTriMin(const int a[], int n) {
    if (n <= 0) return -1;

    int min = a[0];
    int vitri = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < min) {
            min = a[i];
            vitri = i;
        }
    }
    return vitri;
}

int doanTangDaiNhat(const int a[], int n){
    int count = 1;
    int max_doc = 1;
    for ( int i = 0; i < n; i++){
        if (a[i] > a[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if ( count > max_doc){
            max_doc = count;
        }
    }
    return max_doc;

}

int main() {
    int a[100];
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << fixed << setprecision(2);
    cout << "Trung binh: " << trungBinh(a, n) << endl;
    cout << "Lanh nhat: " <<"ngay " << viTriMin(a, n)<<" ("<<a[viTriMin(a, n)]<<" do)"<<endl;
    cout << "Am dai dai nhat: " << doanTangDaiNhat(a,n) << " ngay";
    return 0;
}
