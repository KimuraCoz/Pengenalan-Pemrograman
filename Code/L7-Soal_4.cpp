#include <iostream>
using namespace std;
int pilihan, harga;
string namapaket;
void tampilmenu() {
    cout << "1. Paket Harian" << endl;
    cout << "2. Paket Mingguan" << endl;
    cout << "3. Paket Bulanan" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih menu: "; }
void prosespaket() {
    switch (pilihan) {
        case 1: namapaket = "Paket Harian"; harga = 10000; break;
        case 2: namapaket = "Paket Mingguan"; harga = 40000; break;
        case 3: namapaket = "Paket Bulanan"; harga = 75000; break; } }
void tampilhasil() {
    cout << "Nama paket: " << namapaket << endl;
    cout << "Harga: Rp" << harga << endl; }
int main() {
    do {
        tampilmenu();
        cin >> pilihan; cout << endl;
        if (pilihan >= 1 && pilihan <= 3) { prosespaket(); tampilhasil(); }
        else if (pilihan != 4) { cout << "Pilihan tidak valid" << endl; }
        cout << endl; }
    while (pilihan != 4);
    return 0; }