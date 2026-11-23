#include <iostream>
using namespace std;
string nama, kelompok;
int nilai;
void terimadata() {
    cout << "Masukkan nama: "; cin >> nama;
    cout << "Masukkan nilai praktikum: "; cin >> nilai;
    cout << endl; }
void tentukankelompok() {
    if (nilai >= 85 && nilai <=100) kelompok = "Sangat Baik";
    else if (nilai >= 70) kelompok = "Baik";
    else if (nilai >= 60) kelompok = "Cukup";
    else kelompok = "Perlu Perbaikan"; }
void tampilhasil() {
    cout << "Nama: " << nama << endl;
    cout << "Nilai praktikum: " << nilai << endl;
    cout << "Kelompok: " << kelompok << endl; }
int main() {
    int jumlahmahasiswa;
    int jumlahsangatbaik = 0, jumlahbaik = 0, jumlahcukup = 0, jumlahperlu = 0;
    cout << "Masukkan jumlah mahasiswa: "; cin >> jumlahmahasiswa;
    cout << endl;
    for (int i = 0; i < jumlahmahasiswa; i++) {
        terimadata(); tentukankelompok(); tampilhasil();
        if (kelompok == "Sangat Baik") jumlahsangatbaik++;
        else if (kelompok == "Baik") jumlahbaik++;
        else if (kelompok == "Cukup") jumlahcukup++;
        else jumlahperlu++;
        cout << endl; }
    cout << "Jumlah Sangat Baik: " << jumlahsangatbaik << endl;
    cout << "Jumlah Baik: " << jumlahbaik << endl;
    cout << "Jumlah Cukup: " << jumlahcukup << endl;
    cout << "Jumlah Perlu Perbaikan: " << jumlahperlu << endl;
    return 0; }