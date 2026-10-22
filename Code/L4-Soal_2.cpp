#include <iostream>
using namespace std;

int main() {
    double a, b, hasil;
    int pilihan;
    char op;

    cout << "Kalkulator Sederhana" << endl;
    cout << "Masukkan bilangan pertama : "; cin >> a;
    cout << "Masukkan bilangan kedua : "; cin >> b;
    cout << "1. Pertambahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cout << "Pilih operasi : "; cin >> pilihan;
 
    switch (pilihan) {
        case 1:
            hasil = a + b; op = '+'; break;
        case 2:
            hasil = a - b; op = '-'; break;
        case 3:
            hasil = a * b; op = '*'; break;
        case 4:
            hasil = a / b; op = '/'; break;
        default:
            cout << "Operasi tidak tersedia." << endl;
            return 0;
    }
    cout << "Hasil : " << a << " " << op << " " << b << " = " << hasil << endl;
    return 0;
}