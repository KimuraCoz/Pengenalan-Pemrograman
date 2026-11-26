#include <iostream>
using namespace std;
bool cekgenap(int n) {
    if (n % 2 == 0) { return true; } 
    else { return false; } }
int main() {
    int batas, jumlahgenap = 0, jumlahganjil = 0;
    cout << "Masukkan batas akhir: "; cin >> batas;
    cout << endl;
    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++) {
        if (cekgenap(i)) { cout << i << " "; jumlahgenap++; } }
    cout << endl;
    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i++) {
        if (!cekgenap(i)) { cout << i << " "; jumlahganjil++; } }
    cout << endl;
    cout << "Jumlah bilangan genap: " << jumlahgenap << endl;
    cout << "Jumlah bilangan ganjil: " << jumlahganjil << endl;
    return 0; }