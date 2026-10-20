#include <iostream>
using namespace std;

/* Nomor 4
int main() {
    int panjang = 10;
    int lebar = 5;
    int hasil = panjang * lebar;

    cout << "Panjang = " << panjang << endl;
    cout << "Lebar = " << lebar << endl;
    cout << "Hasil perkalian = " << hasil << endl;
    return 0;
}
*/

/* Nomor 5
int main() {
    int a = 10, b = 3;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    return 0;
}
*/

/* Nomor 6
int main() {
    int hasil = 5 + 2 * 3;
    int hasilKurung = (5 + 2) * 3;

    cout << "5 + 2 * 3 = " << hasil << endl;
    cout << "(5 + 2) * 3 = " << hasilKurung << endl;
    return 0;
}
*/

/* Nomor 7
int main() {
    int a = 10, b = 5;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    return 0;
}
*/

/* Nomor 8
int main() {
    bool a = true, b = false;

    cout << "a = true, b = false" << endl;
    cout << "a && b : " << (a && b) << endl;
    cout << "a || b : " << (a || b) << endl;
    cout << "!a     : " << (!a) << endl;
    cout << "!b     : " << (!b) << endl;
    return 0;
}
*/

/* Nomor 9
int main() {
    double nilai = 85.75;
    string nama = "Andi";
    bool aktif = true;

    cout << "Nilai : " << nilai << endl;
    cout << "Nama  : " << nama << endl;
    cout << "Aktif : " << aktif << endl;
    return 0;
}
*/

// Nomor 10
#include <iostream>
using namespace std;

int main() {
    char kodeProduk = 'B';
    int harga = 15000;
    int jumlahBarang = 20;
    bool tersedia = true;

    cout << "Kode produk    : " << kodeProduk << endl;
    cout << "Harga          : Rp" << harga << endl;
    cout << "Jumlah barang  : " << jumlahBarang << endl;
    if (tersedia) {
        cout << "Ketersediaan   : Tersedia" << endl;
    } else {
        cout << "Ketersediaan   : Tidak tersedia" << endl;
    }
    return 0;
}

