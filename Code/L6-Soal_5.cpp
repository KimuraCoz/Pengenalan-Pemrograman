#include <iostream>
using namespace std;
int main() {
    cout << "Nama: Zulmi Cahya Pratama" << endl;
    cout << "NIM: 13020260028" << endl; cout << endl;
    int kapasitas, jenis, motor = 0, mobil = 0, total_kendaraan = 0, sisa;
    cout << "Kapasitas parkir : "; cin >> kapasitas; cout << endl;
    sisa = kapasitas;
    while (total_kendaraan < kapasitas) {
        cout << "Kendaraan ke-" << total_kendaraan + 1 << endl;
        cout << "Jenis kendaraan (1=Motor, 2=Mobil) : "; cin >> jenis;
        switch (jenis) {
            case 1: motor++; total_kendaraan++; sisa--;
                cout << "Motor masuk." << endl;
                cout << "Sisa kapasitas : " << sisa << endl; break;
            case 2: mobil++; total_kendaraan++; sisa--;
                cout << "Mobil masuk." << endl;
                cout << "Sisa kapasitas : " << sisa << endl; break;
            default:
                cout << "Jenis kendaraan tidak valid" << endl; break; }
        cout << endl; }
    cout << "======================================" << endl;
    cout << "             REKAP PARKIR" << endl;
    cout << "======================================" << endl;
    cout << "Jumlah Motor      : " << motor << endl;
    cout << "Jumlah Mobil      : " << mobil << endl;
    cout << "Total Kendaraan   : " << total_kendaraan << endl;
    cout << "Sisa Kapasitas    : " << sisa << endl;
    cout << endl;
    if (sisa == 0) { cout << "Status Parkir     : PENUH" << endl;} 
    else { cout << "Status Parkir     : TERSEDIA" << endl; }
    cout << "======================================" << endl;
    return 0; }