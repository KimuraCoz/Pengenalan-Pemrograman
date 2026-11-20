#include <iostream>
#include <string>
using namespace std;

string kata;
string kalimat;
int jumlahkata = 0;

void inputkata() {
    cout << "Masukkan kata: "; cin >> kata;
}

void tambahkata() {
    if (kalimat == "") {
        kalimat = kata;
    } else {
        kalimat = kalimat + " " + kata;
    }
    jumlahkata = jumlahkata + 1;
}

int main() {
    int pilihan;
    do {
        cout << "1. Tambah kata" << endl;
        cout << "0. Selesai" << endl;
        cout << "Pilihan: "; cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                inputkata();
                tambahkata();
                break;
            case 0:
                break;
            default:
                cout << "Pilihan tidak tersedia!" << endl;
        }
    } while (pilihan != 0);
    
    cout << "Kalimat     : " << kalimat << endl;
    string info = "Jumlah Kata : " + to_string(jumlahkata);
    cout << info << endl;
    cout << endl;
    cout << "Pola:" << endl;
    for (int i = 1; i <= jumlahkata; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}