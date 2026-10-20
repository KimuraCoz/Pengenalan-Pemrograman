#include <iostream>
using namespace std;

int main() {
    double nilai;

    cout << "=== Menentukan Status Kelulusan ===" << endl;
    cout << "Masukkan nilai akhir : ";
    cin >> nilai;

    cout << "Nilai akhir : " << nilai << endl;
    if (nilai >= 60)
        cout << "Status : Lulus" << endl;
    else
        cout << "Status : Tidak Lulus" << endl;

    return 0;
}