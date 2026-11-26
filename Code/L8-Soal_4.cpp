#include <iostream>
using namespace std;
char tentukangrade(int nilai) {
    if (nilai >= 80) { return 'A'; } 
    else if (nilai >= 70) { return 'B'; } 
    else if (nilai >= 60) { return 'C'; } 
    else if (nilai >= 50) { return 'D'; } 
    else { return 'E'; } }
bool statuslulus(char grade) {
    if (grade == 'A' || grade == 'B' || grade == 'C') { return true; }
    return false; }
int main() {
    int jumlahmahasiswa;
    cout << "Masukkan jumlah mahasiswa: "; cin >> jumlahmahasiswa;
    int jumlahlulus = 0;
    for (int i = 0; i < jumlahmahasiswa; i++) {
        int nilai;
        cout << "Nilai mahasiswa ke-" << i + 1 << ": "; cin >> nilai;
        char grade = tentukangrade(nilai);
        bool lulus = statuslulus(grade);
        cout << endl;
        cout << "Grade: " << grade << endl;
        if (lulus) {
            cout << "Status: Lulus" << endl; jumlahlulus++; } 
        else { cout << "Status: Tidak Lulus" << endl; } }
    cout << endl;
    cout << "Jumlah mahasiswa yang lulus: " << jumlahlulus << endl;
    return 0; }