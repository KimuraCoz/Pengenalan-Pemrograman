#include <iostream>
using namespace std;
long long faktorial(int n) {
    if (n == 0 || n == 1) { return 1; }
    return n * faktorial(n - 1); }
long long kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r)); }
int main() {
    int n, r;
    cout << "Masukkan nilai n: "; cin >> n;
    cout << "Masukkan nilai r: "; cin >> r;
    cout << endl;
    if (n > 20) { cout << "Nilai n maksimal 20" << endl; } 
    else if (r > n) { cout << "Nilai r tidak boleh lebih besar dari n" << endl; } 
    else { cout << "Kombinasi C(" << n << ", " << r << ") = " << kombinasi(n, r) << endl; }
    return 0; }