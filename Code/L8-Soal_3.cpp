#include <iostream>
using namespace std;
int hitungtotal(int total, int nilai) { return total + nilai; }
int hitungminimum(int min, int nilai) { if (nilai < min) { return nilai; }
    return min; }
int hitungmaksimum(int maks, int nilai) { if (nilai > maks) { return nilai; }
    return maks; }
float hitungratarata(int total, int n) { return (float) total / n; }
int main() {
    int jumlahtransaksi;
    cout << "Masukkan jumlah transaksi: "; cin >> jumlahtransaksi;
    int total = 0, min = 0, maks = 0;
    for (int i = 0; i < jumlahtransaksi; i++) { int nilai;
        cout << "Nilai transaksi ke-" << i + 1 << ": "; cin >> nilai;
        if (i == 0) { min = nilai; maks = nilai; }
        total = hitungtotal(total, nilai);
        min = hitungminimum(min, nilai);
        maks = hitungmaksimum(maks, nilai); }
    cout << endl;
    cout << "Total: " << total << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maksimum: " << maks << endl;
    cout << "Rata-rata: " << hitungratarata(total, jumlahtransaksi) << endl;
    return 0; }