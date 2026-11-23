#include <iostream>
#include <string>
using namespace std;
string namabarang;
int jumlahbarang, hargasatuan, totalharga;
int jumlahtransaksi = 0, totalbarang = 0, totalpenjualan = 0;
void terimadata() {
    cout << "Masukkan nama barang: "; cin >> namabarang;
    cout << "Masukkan jumlah barang: "; cin >> jumlahbarang;
    cout << "Masukkan harga satuan: "; cin >> hargasatuan;
    cout << endl; }
void hitungtotal() { totalharga = jumlahbarang * hargasatuan; }
void tampilhasil() {
    cout << "Nama barang: " << namabarang << endl;
    cout << "Jumlah barang: " << jumlahbarang << endl;
    cout << "Harga satuan: Rp" << hargasatuan << endl;
    cout << "Total harga: Rp" << totalharga << endl; }
int main() {
    int n;
    cout << "Masukkan jumlah transaksi: "; cin >> n; cout << endl;
    for (int i = 0; i < n; i++) {
        terimadata(); hitungtotal(); tampilhasil();
        jumlahtransaksi++; totalbarang += jumlahbarang; totalpenjualan += totalharga; cout << endl; }
    cout << "Jumlah transaksi: " << jumlahtransaksi << endl;
    cout << "Total barang terjual: " << totalbarang << endl;
    cout << "Total seluruh penjualan: Rp" << totalpenjualan << endl;
    return 0; }