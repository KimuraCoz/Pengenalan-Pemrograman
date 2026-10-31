#include <iostream>
using namespace std;

int main() {
    int i;
    int total;
    int batas;

    total = 0;

    cout << "Masukkan batas akhir: ";
    cin >> batas;

    for (i = 1; i <= batas; i++) {
        cout << i << " ";
        total += i;
    }

    cout << endl;
    cout << "Jumlah seluruh bilangan = " << total << endl;

    return 0;
}