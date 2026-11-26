#include <iostream>
using namespace std;
int hitungbiayapemakaian(int pemakaian) {
    if (pemakaian <= 20) { return pemakaian * 500; } 
    else if (pemakaian <= 50) { return pemakaian * 1000; } 
    else { return pemakaian * 1500; } }
int hitungadministrasi() { return 2000; }
int hitungtotaltagihan(int pemakaian) {
    return hitungbiayapemakaian(pemakaian) + hitungadministrasi(); }
int main() {
    int pemakaian;
    cout << "Masukkan pemakaian listrik (kWh): "; cin >> pemakaian;
    int biayapakai = hitungbiayapemakaian(pemakaian);
    int biayaadmin = hitungadministrasi();
    int totaltagihan = hitungtotaltagihan(pemakaian);
    cout << endl;
    cout << "Biaya pemakaian: Rp" << biayapakai << endl;
    cout << "Biaya administrasi: Rp" << biayaadmin << endl;
    cout << "Total tagihan: Rp" << totaltagihan << endl;
    return 0; }