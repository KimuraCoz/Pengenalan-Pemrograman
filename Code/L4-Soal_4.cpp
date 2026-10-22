#include <iostream>
#include <string>
using namespace std;

int main() {
    const int admin = 5000;
    string stambuk, nama;
    int kode, jumlah;
    double harga, subtotal, total;

    cout << "Sistem Pembayaran Praktikum" << endl;
    cout << "Masukkan stambuk : "; cin >> stambuk;
    cout << "1. Cetak Modul Praktikum - Rp35000" << endl;
    cout << "2. Penggantian Kartu Praktikum - Rp25000" << endl;
    cout << "3. Cetak Sertifikat - Rp50000" << endl;
    cout << "4. Penggunaan Laboratorium Tambahan - Rp75000" << endl;
    cout << "5. Pelatihan Tambahan - Rp100000" << endl;
    cout << "Masukkan kode layanan : "; cin >> kode;
    cout << "Masukkan jumlah layanan : "; cin >> jumlah;

    switch (kode) {
        case 1:
            nama = "Cetak Modul Praktikum"; harga = 35000; break;
        case 2:
            nama = "Penggantian Kartu Praktikum"; harga = 25000; break;
        case 3:
            nama = "Cetak Sertifikat"; harga = 50000; break;
        case 4:
            nama = "Penggunaan Laboratorium Tambahan"; harga = 75000; break;
        case 5:
            nama = "Pelatihan Tambahan"; harga = 100000; break;
        default:
            cout << "Kode layanan tidak ditemukan." << endl;
            return 0;
    }

    subtotal = harga * jumlah; total = subtotal + admin;
    cout << " " << endl;
    cout << "=== Bukti Pembayaran ===" << endl;
    cout << "Stambuk            : " << stambuk << endl;
    cout << "Kode Layanan       : " << kode << endl;
    cout << "Nama Layanan       : " << nama << endl;
    cout << "Harga Satuan       : Rp" << harga << endl;
    cout << "Jumlah Layanan     : " << jumlah << endl;
    cout << "Subtotal           : Rp" << subtotal << endl;
    cout << "Biaya Administrasi : Rp" << admin << endl;
    cout << "Total Pembayaran   : Rp" << total << endl;
    return 0;
}