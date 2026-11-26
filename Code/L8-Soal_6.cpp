#include <iostream>
using namespace std;
int faktorial(int n) {
    if (n == 0 || n == 1) { return 1; }
    return n * faktorial(n - 1); }
int main() {
    int n; cout << "Masukkan nilai n: "; cin >> n;
    cout << endl;
    cout << "Nilai " << n << "! adalah " << faktorial(n) << endl;
    return 0; }