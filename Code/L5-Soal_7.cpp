#include <iostream>
using namespace std;
int main(){
    int n, kode, jumlah, harga, subtotal, total = 0, valid = 0, tidakvalid = 0; string nama;
    cout << "Jumlah transaksi : "; cin >> n;
    for(int i=1; i<=n; i++){
        cout << "1. Buku - Rp10000" << endl;
        cout << "2. Pensil - Rp5000" << endl;
        cout << "3. Pulpen - Rp7500" << endl;
        cout << "Transaksi ke-" << i << endl;
        cout << "Kode barang : "; cin >> kode;
        cout << "Jumlah barang : "; cin >> jumlah;
        cout << endl;
        switch(kode){
            case 1: nama = "Buku"; harga = 10000; break;
            case 2: nama = "Pensil"; harga = 5000; break;
            case 3: nama = "Pulpen"; harga = 7500; break;
            default: nama = ""; harga = 0; }
        if(harga == 0){
            tidakvalid++; cout << "Kode barang tidak tersedia" << endl;} 
        else {
            subtotal = harga * jumlah; total += subtotal; valid++;
            cout << "Nama barang : " << nama << endl;
            cout << "Subtotal : Rp" << subtotal << endl;} }
    cout << endl;
    cout << "Jumlah transaksi valid : " << valid << endl;
    cout << "Transaksi tidak valid : " << tidakvalid << endl;
    cout << "Total penjualan : Rp" << total << endl;
    return 0;}