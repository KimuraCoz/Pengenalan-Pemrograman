#include <iostream>
using namespace std;
int suhu, jumlahdingin = 0, jumlahnormal = 0, jumpanas = 0;;
string kategori;
void terimasuhu() { cout << "Masukkan suhu: "; cin >> suhu;}
void tentukankategori() {
    if (suhu < 20) kategori = "Dingin";
    else if (suhu >= 20 && suhu <= 30) kategori = "Normal";
    else kategori = "Panas";}
void tampilkanhasil() { cout << "Suhu " << suhu << " adalah " << kategori << endl; }
int main() {
    int n;
    cout << "Masukkan jumlah data: "; cin >> n;
    for (int i = 0; i < n; i++) {
        terimasuhu(); tentukankategori(); tampilkanhasil();
        if (kategori == "Dingin") jumlahdingin++;
        else if (kategori == "Normal") jumlahnormal++;
        else jumpanas++; cout << endl; }
    cout << "Jumlah Dingin: " << jumlahdingin << endl;
    cout << "Jumlah Normal: " << jumlahnormal << endl;
    cout << "Jumlah Panas: " << jumpanas << endl;
    return 0; }