#include <iostream>
using namespace std;

int main() {
    int i;
    int batas;
    int jumlahgenap;
    int jumlahganjil;

    jumlahgenap = 0;
    jumlahganjil = 0;

    cout << "Masukkan batas akhir: ";
    cin >> batas;

    cout << "Bilangan Genap: ";
    for (i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahgenap++;
        }
    }

    cout << endl;

    cout << "Bilangan Ganjil: ";
    for (i = 1; i <= batas; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
            jumlahganjil++;
        }
    }

    cout << endl;

    cout << "Jumlah bilangan genap: " << jumlahgenap << endl;
    cout << "Jumlah bilangan ganjil: " << jumlahganjil << endl;

    return 0;
}