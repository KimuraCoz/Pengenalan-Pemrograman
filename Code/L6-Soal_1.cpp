#include <iostream>
using namespace std;
int main() {
    cout << "Nama: Zulmi Cahya Pratama" << endl;
    cout << "NIM: 13020260028" << endl; cout << endl;
    int target, total, setoran, jumlah;
    cout << "Target tabungan: "; cin >> target;
    cout << "Tabungan awal : "; cin >> total;
    jumlah = 1;
    while (total < target) {
        jumlah++;
        cout << "Tabungan " << jumlah << ": "; cin >> setoran;
        total = total + setoran;
        cout << "Total tabungan saat ini: " << total << endl; }
    cout << "Target tercapai." << endl;
    cout << "Jumlah tabungan + tabungan awal: " << jumlah << endl;
    return 0; }