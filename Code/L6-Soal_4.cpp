#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Nama: Zulmi Cahya Pratama" << endl;
    cout << "NIM: 13020260028" << endl; cout << endl;
    int suhu, lanjut, jumlah_data = 0, dingin = 0, normal = 0, panas = 0, total_suhu = 0;
    do {
        cout << "Masukkan suhu : "; cin >> suhu;
        jumlah_data++; total_suhu = total_suhu + suhu;
        if (suhu < 20) { dingin++; } 
        else if (suhu <= 30) { normal++; } 
        else { panas++; }
        cout << "Masukkan data lagi? (1=Ya, 0=Tidak): "; cin >> lanjut;
    } while (lanjut == 1);
    cout << "Jumlah Data    : " << jumlah_data << endl;
    cout << "Dingin         : " << dingin << endl;
    cout << "Normal         : " << normal << endl;
    cout << "Panas          : " << panas << endl;
    cout << fixed << setprecision(2);
    cout << "Rata-rata      : " << static_cast<double>(total_suhu) / jumlah_data << endl;
    return 0; }

// Input pakai suhu 18, 26, 28, 30, 35