#include <iostream>
#include <iomanip>
using namespace std;
double hitunggajipokok(int jamkerja, int tarifperjam) {
    if (jamkerja > 40) { return 40 * tarifperjam; } 
    else { return jamkerja * tarifperjam; } }
double hitunglembur(int jamkerja, int tarifperjam) {
    if (jamkerja > 40) { return (jamkerja - 40) * tarifperjam * 1.5; } 
    else { return 0; } }
double hitungtotalgaji(int jamkerja, int tarifperjam) {
    return hitunggajipokok(jamkerja, tarifperjam) + hitunglembur(jamkerja, tarifperjam); }
int main() {
    int jumlahkaryawan;
    cout << "Masukkan jumlah karyawan: "; cin >> jumlahkaryawan;
    cout << fixed << setprecision(2);
    for (int i = 0; i < jumlahkaryawan; i++) {
        string nama; int jamkerja, tarifperjam;
        cout << endl;
        cout << "Data karyawan ke-" << i + 1 << endl;
        cout << "Nama: "; cin >> nama;
        cout << "Jam kerja: "; cin >> jamkerja;
        cout << "Tarif per jam: "; cin >> tarifperjam;
        cout << endl;
        cout << "Gaji Pokok: " << hitunggajipokok(jamkerja, tarifperjam) << endl;
        cout << "Lembur: " << hitunglembur(jamkerja, tarifperjam) << endl;
        cout << "Total Gaji: " << hitungtotalgaji(jamkerja, tarifperjam) << endl; }
    return 0; }