#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nilai;
    int kode;

    cout << "=== Sistem Konversi Satuan Multifungsi ===" << endl;
    cout << "Masukkan nilai : ";
    cin >> nilai;
    cout << "1. Meter ke Centimeter" << endl;
    cout << "2. Kilometer ke Meter" << endl;
    cout << "3. Kilogram ke Gram" << endl;
    cout << "4. Jam ke Menit" << endl;
    cout << "5. Celsius ke Fahrenheit" << endl;
    cout << "Masukkan kode konversi : ";
    cin >> kode;

    cout << fixed << setprecision(2);
    switch (kode) {
        case 1:
            cout << "Nilai Awal     : " << nilai << " Meter" << endl;
            cout << "Jenis Konversi : Meter ke Centimeter" << endl;
            cout << "Hasil Konversi : " << nilai * 100 << " Centimeter" << endl;
            break;
        case 2:
            cout << "Nilai Awal     : " << nilai << " Kilometer" << endl;
            cout << "Jenis Konversi : Kilometer ke Meter" << endl;
            cout << "Hasil Konversi : " << nilai * 1000 << " Meter" << endl;
            break;
        case 3:
            cout << "Nilai Awal     : " << nilai << " Kilogram" << endl;
            cout << "Jenis Konversi : Kilogram ke Gram" << endl;
            cout << "Hasil Konversi : " << nilai * 1000 << " Gram" << endl;
            break;
        case 4:
            cout << "Nilai Awal     : " << nilai << " Jam" << endl;
            cout << "Jenis Konversi : Jam ke Menit" << endl;
            cout << "Hasil Konversi : " << nilai * 60 << " Menit" << endl;
            break;
        case 5:
            cout << "Nilai Awal     : " << nilai << " Celsius" << endl;
            cout << "Jenis Konversi : Celsius ke Fahrenheit" << endl;
            cout << "Hasil Konversi : " << (nilai * 9 / 5) + 32 << " Fahrenheit" << endl;
            break;
        default:
            cout << "Kode konversi tidak tersedia." << endl;
    }

    return 0;
}