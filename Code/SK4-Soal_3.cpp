#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n, nilai;
    int total = 0;

    cout << "Masukkan ukuran matriks: ";
    cin >> n;

	clock_t mulai = clock();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "Masukkan angka: ";
            cin >> nilai;

            total = total + nilai;
        }
    }
    clock_t selesai = clock();
    double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;
    cout << "Waktu pertumbuhan: " << waktu << " detik" << endl;

    cout << "Total matriks: " << total << endl;

    return 0;
}