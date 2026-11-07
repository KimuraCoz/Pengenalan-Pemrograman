#include <iostream>
using namespace std;
int main() {
    cout << "Nama: Zulmi Cahya Pratama" << endl;
    cout << "NIM: 13020260028" << endl; cout << endl;
    int stok, stok_awal, harga_beli, harga_jual, jumlah_beli, lanjut = 1;
    int subtotal, modal, keuntungan;
    int transaksi_berhasil = 0, transaksi_ditolak = 0, total_terjual = 0;
    int total_omzet = 0, total_modal = 0, total_keuntungan = 0;
    cout << "Stok awal           : "; cin >> stok; stok_awal = stok;
    cout << "Harga beli per barang: Rp"; cin >> harga_beli;
    cout << "Harga jual per barang: Rp"; cin >> harga_jual;
    do {
        cout << endl;
        cout << "Jumlah barang dibeli : "; cin >> jumlah_beli;
        cout << endl;
        if (jumlah_beli > stok) {
            transaksi_ditolak++;
            cout << "Stok tidak mencukupi." << endl;
            cout << "Stok tersedia     : " << stok << endl; } 
        else {
            transaksi_berhasil++; 
            stok = stok - jumlah_beli;
            total_terjual = total_terjual + jumlah_beli;
            subtotal = jumlah_beli * harga_jual;
            modal = jumlah_beli * harga_beli;
            keuntungan = subtotal - modal;
            total_omzet = total_omzet + subtotal;
            total_modal = total_modal + modal;
            total_keuntungan = total_keuntungan + keuntungan;
            cout << "Transaksi berhasil." << endl;
            cout << "Subtotal          : Rp" << subtotal << endl;
            cout << "Modal Barang      : Rp" << modal << endl;
            cout << "Keuntungan        : Rp" << keuntungan << endl;
            cout << "Sisa Stok         : " << stok << endl; }
        cout << endl;
        if (stok > 0) { cout << "Lanjut transaksi? (1 = Ya, 0 = Tidak) : "; cin >> lanjut; }
    } while (lanjut == 1 && stok > 0);
    cout << endl;
    cout << "======================================" << endl;
    cout << "            REKAP PENJUALAN" << endl;
    cout << "======================================" << endl;
    cout << "Stok Awal            : " << stok_awal << endl;
    cout << "Transaksi Berhasil   : " << transaksi_berhasil << endl;
    cout << "Transaksi Ditolak    : " << transaksi_ditolak << endl;
    cout << "Total Barang Terjual : " << total_terjual << endl;
    cout << "Sisa Stok            : " << stok << endl;
    cout << endl;
    cout << "Total Omzet          : Rp" << total_omzet << endl;
    cout << "Total Modal Terjual  : Rp" << total_modal << endl;
    cout << "Total Keuntungan     : Rp" << total_keuntungan << endl;
    cout << "======================================" << endl;
    return 0; }