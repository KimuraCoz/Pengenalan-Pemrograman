#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Nama: Zulmi Cahya Pratama" << endl;
    cout << "NIM: 13020260028" << endl; cout << endl;
    int bilangan, count = 0, sum = 0, min, max;
    cout << "Masukkan bilangan : "; cin >> bilangan;
    while (bilangan >= 0) {
        count++; sum = sum + bilangan;
        if (count == 1) {
            min = bilangan; max = bilangan;} 
        else {
            if (bilangan < min) { min = bilangan; }
            if (bilangan > max) { max = bilangan; } }
        cout << "Masukkan bilangan : "; cin >> bilangan; }
    cout << endl;
    cout << "======================================" << endl;
    cout << "	HASIL PENGOLAHAN DATA" << endl;
    cout << "======================================" << endl;
    cout << "Jumlah Data     : " << count << endl;
    cout << "Total           : " << sum << endl;
    cout << "Nilai Minimum   : " << min << endl;
    cout << "Nilai Maksimum  : " << max << endl;
    cout << fixed << setprecision(2);
    cout << "Rata-rata       : " << static_cast<double>(sum) / count << endl;
    cout << "======================================" << endl;
    return 0; }