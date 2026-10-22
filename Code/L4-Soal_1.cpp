#include <iostream>
#include <string>
using namespace std;

int main() {
    int kode, jumlah;
    string nama;
    double harga, total;

    cout << "Sistem Pemesanan Menu Kantin" << endl;
    cout << "1. Nasi Goreng - Rp20000" << endl;
    cout << "2. Mie Goreng - Rp18000" << endl;
    cout << "3. Ayam Geprek - Rp22000" << endl;
    cout << "4. Bakso - Rp17000" << endl;
    cout << "5. Es Teh - Rp5000" << endl;
    cout << "Masukkan kode menu : "; cin >> kode;
    cout << "Masukkan jumlah pesanan : "; cin >> jumlah;

    switch (kode) {
        case 1:
            nama = "Nasi Goreng"; harga = 20000; break;
        case 2:
            nama = "Mie Goreng"; harga = 18000; break;
        case 3:
            nama = "Ayam Geprek"; harga = 22000; break;
        case 4:
            nama = "Bakso"; harga = 17000; break;
        case 5:
            nama = "Es Teh"; harga = 5000; break;
        default:
            cout << "Menu tidak ditemukan." << endl;
        return 0;
    }

    total = harga * jumlah;
    cout << "Detail Pemesanan" << endl;
    cout << "Kode Menu        : " << kode << endl;
    cout << "Nama Menu        : " << nama << endl;
    cout << "Harga Satuan     : Rp" << harga << endl;
    cout << "Jumlah Pesanan   : " << jumlah << endl;
    cout << "Total Pembayaran : Rp" << total << endl;
    return 0;
}