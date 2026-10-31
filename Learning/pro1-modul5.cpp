#include <iostream>
using namespace std;

int main() {
    int i;
    int total;

    total = 0;

    for (i = 1; i <= 28; i++) {
        cout << i << " ";
        total += i;
    }

    cout << endl;
    cout << "Jumlah seluruh bilangan= " << total << endl;

    return 0;
}