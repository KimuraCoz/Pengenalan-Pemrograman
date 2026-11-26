#include <iostream>
#include <iomanip>
using namespace std;
double subtotal(double hargajual, int jumlah) {
    return hargajual * jumlah; }
double modal(double hargabeli, int jumlah) {
    return hargabeli * jumlah; }
double keuntungan(double hargabeli, double hargajual, int jumlah) {
    return subtotal(hargajual, jumlah) - modal(hargabeli, jumlah); }
double persentase(double untung, double mod) {
    return untung / mod * 100; }
bool cekvalid(double hargabeli, double hargajual, int jumlah) {
    if (hargabeli > 0 && hargajual > 0 && jumlah > 0) { return true; } 
    else { return false; } }
int main() {
    int jumlahtransaksi, jumlahbarang, transaksivalid = 0, transaksitidakvalid = 0;
    double hargabeli, hargajual;
    double totalomzet = 0, totalmodal = 0, totalkeuntungan = 0;
    cout << "Jumlah transaksi: "; cin >> jumlahtransaksi; cout << endl;
    for (int i = 1; i <= jumlahtransaksi; i++) {
        cout << "Transaksi ke-" << i << endl;
        cout << "Harga beli: "; cin >> hargabeli;
        cout << "Harga jual: "; cin >> hargajual;
        cout << "Jumlah barang: "; cin >> jumlahbarang; cout << endl;
        if (cekvalid(hargabeli, hargajual, jumlahbarang)) {
            double sub = subtotal(hargajual, jumlahbarang);
            double mod = modal(hargabeli, jumlahbarang);
            double untung = keuntungan(hargabeli, hargajual, jumlahbarang);
            cout << fixed << setprecision(2);
            cout << "Subtotal: " << sub << endl;
            cout << "Modal: " << mod << endl;
            cout << "Keuntungan: " << untung << endl;
            cout << "Persentase keuntungan: " << persentase(untung, mod) << "%" << endl;
            cout << "Status: Valid" << endl;
            totalomzet += sub; totalmodal += mod; totalkeuntungan += untung; transaksivalid++;
        } else {
            cout << "Transaksi tidak valid" << endl; transaksitidakvalid++; }
        cout << endl; }
    cout << "REKAP PENJUALAN" << endl;
    cout << "Total omzet: " << totalomzet << endl;
    cout << "Total modal: " << totalmodal << endl;
    cout << "Total keuntungan: " << totalkeuntungan << endl;
    cout << "Transaksi valid: " << transaksivalid << endl;
    cout << "Transaksi tidak valid: " << transaksitidakvalid << endl;
    return 0; }