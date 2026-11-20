#include <iostream>
#include <string>
using namespace std;

string nama, status;
double tugas, uts, uas, nilaiakhir;
char grade;
int lulus = 0, tidaklulus = 0;

void inputnilai() {
    cout << "Nama        : "; cin >> nama;
    cout << "Nilai Tugas : "; cin >> tugas;
    cout << "Nilai UTS   : "; cin >> uts;
    cout << "Nilai UAS   : "; cin >> uas;
    cout << endl;
}

void hitungnilai() {
    nilaiakhir = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
    if (nilaiakhir >= 80) {
        grade = 'A';
    } else if (nilaiakhir >= 70) {
        grade = 'B';
    } else if (nilaiakhir >= 60) {
        grade = 'C';
    } else if (nilaiakhir >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    if (grade == 'A' || grade == 'B' || grade == 'C') {
        status = "Lulus";
    } else {
        status = "Tidak Lulus";
    }
}

void tampilhasil(string n, double na, char g, string s) {
    cout << "HASIL PENILAIAN" << endl;
    cout << "Nilai Akhir : " << na << endl;
    cout << "Grade       : " << g << endl;
    cout << "Status      : " << s << endl;
    cout << "=======================" << endl;
    cout << endl;
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: "; cin >> jumlah;
    cout << endl;
    
    for (int i = 1; i <= jumlah; i++) {
        cout << "=======================" << endl;
        cout << "DATA MAHASISWA KE-" << i << endl;
        cout << "=======================" << endl;
        inputnilai();
        hitungnilai();
        tampilhasil(nama, nilaiakhir, grade, status);
        if (status == "Lulus") {
            lulus = lulus + 1;
        } else {
            tidaklulus = tidaklulus + 1;
        }
    }
    
    cout << "=======================" << endl;
    cout << "    Rekap Kelulusan" << endl;
    cout << "=======================" << endl;
    cout << "Jumlah Lulus       : " << lulus << endl;
    cout << "Jumlah Tidak Lulus : " << tidaklulus << endl;
    cout << "=======================" << endl;
    
    return 0;
}