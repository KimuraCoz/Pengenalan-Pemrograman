#include <iostream>
using namespace std;
string namapelanggan, jenislayanan;
int kodelayanan;
void inputdata() {
    cout << "Nama pelanggan : "; cin >> namapelanggan;
    cout << "Jenis layanan (1. Hitam Putih / 2. Warna / 3. Jilid) : ";
    cin >> kodelayanan; cout << endl; }
void tentukanlayanan() {
    switch (kodelayanan) {
        case 1: jenislayanan = "Cetak Hitam Putih"; break;
        case 2: jenislayanan = "Cetak Warna"; break;
        case 3: jenislayanan = "Jilid Dokumen"; break;
        default: jenislayanan = "Layanan Tidak Tersedia"; } }
void tampilhasil() {
    cout << "--- Hasil Pelayanan ---" << endl;
    cout << "Nama pelanggan : " << namapelanggan << endl;
    cout << "Jenis layanan : " << jenislayanan << endl; }
int main() {
    int jumlahpelanggan;
    cout << "Masukkan jumlah pelanggan : "; cin >> jumlahpelanggan; cout << endl;
    for (int i = 1; i <= jumlahpelanggan; i++) {
        cout << "Pelanggan ke-" << i << endl;
        inputdata(); tentukanlayanan(); tampilhasil();
        cout << endl; }
    cout << "Jumlah pelanggan yang diproses : " << jumlahpelanggan << endl;
    return 0; }