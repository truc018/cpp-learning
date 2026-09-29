#include <iostream>
using namespace std;

int timKiem(const int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}
    

int main() {
    int n, b;
    cin >>n;

    int a[10];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin>>b;

    cout << "Vi tri: " << timKiem(a, n, b);
    return 0;
}