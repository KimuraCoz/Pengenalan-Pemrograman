#include <iostream>
using namespace std;
string nama;
int pemakaian, tagihan;
void hitungtagihan() {
    if (pemakaian <= 10) tagihan = pemakaian * 2000;
    else if (pemakaian <= 20) tagihan = pemakaian * 3000;
    else tagihan = pemakaian * 4000; }
void tampilhasil() {
    cout << "Nama: " << nama << endl;
    cout << "Tagihan: Rp" << tagihan << endl; }
int main() {
    int jumlahpelanggan;
    cout << "Masukkan jumlah pelanggan: "; cin >> jumlahpelanggan; 
    cout << endl;
    for (int i = 0; i < jumlahpelanggan; i++) {
        cout << "Masukkan nama: "; cin >> nama;
        cout << "Masukkan jumlah pemakaian air dalam m3: "; cin >> pemakaian; cout << endl;
        hitungtagihan(); tampilhasil(); cout << endl; }
    return 0; }