#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long stambuk;
    string nama;
    double harga, total, batas, diskon, bayar;
    int jumlah, digit;

    cout << "stambuk : ";
    cin >> stambuk;
    cout << "nama barang : ";
    cin >> nama;
    cout << "harga satuan : ";
    cin >> harga;
    cout << "jumlah barang : ";
    cin >> jumlah;

    digit = stambuk % 100;
    total = harga * jumlah;
    batas = 250000 + (digit * 2000);

    if (total >= batas) {
        diskon = total * 0.10;}
    else {
        diskon = 0;}

    bayar = total - diskon;

    cout << "\n=== struk pembayaran ===\n";
    cout << fixed << setprecision(2);
    cout << setw(14) << "stambuk" << " : " << stambuk << endl;
    cout << setw(14) << "nama barang" << " : " << nama << endl;
    cout << setw(14) << "harga satuan" << " : Rp" << harga << endl;
    cout << setw(14) << "jumlah barang" << " : " << jumlah << endl;
    cout << setw(14) << "total belanja" << " : Rp" << total << endl;
    cout << setw(14) << "batas diskon" << " : Rp" << batas << endl;
    cout << setw(14) << "diskon" << " : Rp" << diskon << endl;
    cout << setw(14) << "total bayar" << " : Rp" << bayar << endl;

    return 0;
}