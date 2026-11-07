#include <iostream>
using namespace std;
int main() {
    cout << "Nama: Zulmi Cahya Pratama" << endl;
    cout << "NIM: 13020260028" << endl; cout << endl;
    int total_tagihan, sisa, pembayaran, jumlah_pembayaran = 0;
    cout << "Total tagihan : "; cin >> total_tagihan;
    sisa = total_tagihan; cout << endl;
    while (sisa > 0) {
        cout << "Pembayaran ke-" << jumlah_pembayaran + 1 << " : "; cin >> pembayaran;
        if (pembayaran > sisa) {
            cout << "Pembayaran melebihi sisa tagihan." << endl;
            cout << endl; } 
        else {
            sisa = sisa - pembayaran; jumlah_pembayaran++;
            cout << "Sisa tagihan    : " << sisa << endl;
        cout << endl; } }
    cout << "===============================" << endl;
    cout << "       TAGIHAN LUNAS" << endl;
    cout << "===============================" << endl;
    cout << "Total Tagihan         : Rp" << total_tagihan << endl;
    cout << "Jumlah Pembayaran     : " << jumlah_pembayaran << endl;
    cout << "Sisa Tagihan          : Rp" << sisa << endl;
    cout << "===============================" << endl;
    return 0; }