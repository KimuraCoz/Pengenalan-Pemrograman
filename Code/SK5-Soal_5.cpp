#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int menu, jumlah, harga, subtotal, penjualan = 0, valid = 0, tidakvalid = 0;
    string nama_barang;
    do {
        cout << "==================================" << endl;
        cout << "        DAFTAR BARANG" << endl;
        cout << "==================================" << endl;
        cout << "1. Buku   Rp10.000" << endl;
        cout << "2. Pensil Rp5.000" << endl;
        cout << "3. Pulpen Rp7.500" << endl;
        cout << "4. Selesai" << endl;
        cout << "==================================" << endl;
        cout << "Pilih menu : "; cin >> menu;
        harga = 0; nama_barang = "";
        switch (menu) {
            case 1: nama_barang = "Buku"; harga = 10000; break;
            case 2: nama_barang = "Pensil"; harga = 5000; break;
            case 3: nama_barang = "Pulpen"; harga = 7500; break; }
        if (menu >= 1 && menu <= 3) {
            cout << "Jumlah barang : "; cin >> jumlah;
            subtotal = harga * jumlah; penjualan = penjualan + subtotal; valid++;
            cout << endl;
            cout << "Barang     : " << nama_barang << endl;
            cout << "Harga      : Rp" << harga << endl;
            cout << "Jumlah     : " << jumlah << endl;
            cout << "Subtotal   : Rp" << subtotal << endl;
            cout << endl;
        } else if (menu != 4) {
            tidakvalid++; 
            cout << endl;
            cout << "Pilihan tidak tersedia." << endl;
            cout << "Transaksi tidak dihitung." << endl;
            cout << endl; }
    } while (menu != 4);
    cout << endl;
    cout << "==================================" << endl;
    cout << "        REKAP TRANSAKSI" << endl;
    cout << "==================================" << endl;
    cout << "Transaksi Valid       : " << valid << endl;
    cout << "Transaksi Tidak Valid : " << tidakvalid << endl;
    cout << fixed << setprecision(2);
    cout << "Total Penjualan       : Rp" << static_cast<double>(penjualan) << endl;
    cout << "==================================" << endl;
    cout << endl;
    cout << "Program selesai." << endl;
    return 0;
}