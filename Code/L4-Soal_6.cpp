#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string stambuk, nama_kategori, nama_produk;
    int kode_kategori, kode_produk, jumlah;
    double harga, subtotal, layanan, total;
    bool ketemu = true;

    cout << "=== Sistem Transaksi Toko Komputer ===" << endl;
    cout << "Masukkan stambuk : ";
    cin >> stambuk;
    cout << "1. Perangkat Input" << endl;
    cout << "2. Perangkat Output" << endl;
    cout << "3. Penyimpanan Data" << endl;
    cout << "Masukkan kode kategori : ";
    cin >> kode_kategori;

    switch (kode_kategori) {
        case 1:
            nama_kategori = "Perangkat Input";
            cout << "1. Keyboard - Rp150000" << endl;
            cout << "2. Mouse - Rp100000" << endl;
            cout << "3. Scanner - Rp750000" << endl;
            cout << "Masukkan kode produk : ";
            cin >> kode_produk;
            cout << "Masukkan jumlah barang : ";
            cin >> jumlah;
            switch (kode_produk) {
                case 1: nama_produk = "Keyboard"; harga = 150000; break;
                case 2: nama_produk = "Mouse"; harga = 100000; break;
                case 3: nama_produk = "Scanner"; harga = 750000; break;
                default:
                    nama_produk = "-";
                    harga = 0;
                    ketemu = false;
                    cout << "Produk tidak ditemukan." << endl;
            }
            break;
        case 2:
            nama_kategori = "Perangkat Output";
            cout << "1. Monitor - Rp1500000" << endl;
            cout << "2. Printer - Rp1200000" << endl;
            cout << "3. Speaker - Rp300000" << endl;
            cout << "Masukkan kode produk : ";
            cin >> kode_produk;
            cout << "Masukkan jumlah barang : ";
            cin >> jumlah;
            switch (kode_produk) {
                case 1: nama_produk = "Monitor"; harga = 1500000; break;
                case 2: nama_produk = "Printer"; harga = 1200000; break;
                case 3: nama_produk = "Speaker"; harga = 300000; break;
                default:
                    nama_produk = "-";
                    harga = 0;
                    ketemu = false;
                    cout << "Produk tidak ditemukan." << endl;
            }
            break;
        case 3:
            nama_kategori = "Penyimpanan Data";
            cout << "1. Flashdisk - Rp100000" << endl;
            cout << "2. SSD - Rp850000" << endl;
            cout << "3. Harddisk - Rp700000" << endl;
            cout << "Masukkan kode produk : ";
            cin >> kode_produk;
            cout << "Masukkan jumlah barang : ";
            cin >> jumlah;
            switch (kode_produk) {
                case 1: nama_produk = "Flashdisk"; harga = 100000; break;
                case 2: nama_produk = "SSD"; harga = 850000; break;
                case 3: nama_produk = "Harddisk"; harga = 700000; break;
                default:
                    nama_produk = "-";
                    harga = 0;
                    ketemu = false;
                    cout << "Produk tidak ditemukan." << endl;
            }
            break;
        default:
            nama_kategori = "-";
            ketemu = false;
            cout << "Kategori tidak ditemukan." << endl;
    }

    if (ketemu) {
        subtotal = harga * jumlah;
        layanan = subtotal * 0.02;
        total = subtotal + layanan;

        cout << endl;
        cout << "========================================" << endl;
        cout << "          TOKO KOMPUTER FIKOM" << endl;
        cout << "========================================" << endl;
        cout << "Stambuk         : " << stambuk << endl;
        cout << "Kategori        : " << nama_kategori << endl;
        cout << "Produk          : " << nama_produk << endl;
        cout << "Harga Satuan    : Rp" << fixed << setprecision(2) << harga << endl;
        cout << "Jumlah          : " << jumlah << endl;
        cout << endl;
        cout << "Subtotal        : Rp" << subtotal << endl;
        cout << "Biaya Layanan   : Rp" << layanan << endl;
        cout << "Total Bayar     : Rp" << total << endl;
        cout << "========================================" << endl;
    }

    return 0;
}