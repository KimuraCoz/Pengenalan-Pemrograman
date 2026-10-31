#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n, target;
    int perbandingan = 0;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    cout << "Masukkan target: ";
    cin >> target;

	clock_t mulai = clock();
    for (int i = 1; i <= n; i++) {
        perbandingan++;

        if (i == target) {
            cout << "Target ditemukan!" << endl;
            break;
        }
    }
    clock_t selesai = clock();
    double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;

    cout << "Jumlah perbandingan: " << perbandingan << endl;
    cout << "Waktu pertumbuhan: " << waktu << " detik" << endl;
         

    return 0;
}