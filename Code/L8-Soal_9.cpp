#include <iostream>
using namespace std;
double celsiuskefahrenheit(double c) {
    return (c * 9 / 5) + 32; }
double fahrenheitkecelsius(double f) {
    return (f - 32) * 5 / 9; }
double celsiuskekelvin(double c) {
    return c + 273.15; }
int main() {
    double nilai, hasil; int pilihan;
    cout << "Masukkan nilai: "; cin >> nilai; cout << endl;
    cout << "MENU" << endl;
    cout << "1. Celsius ke Fahrenheit" << endl;
    cout << "2. Fahrenheit ke Celsius" << endl;
    cout << "3. Celsius ke Kelvin" << endl;
    cout << "Pilihan: "; cin >> pilihan;
    cout << endl;
    switch (pilihan) {
        case 1: hasil = celsiuskefahrenheit(nilai);
            cout << nilai << " Celsius = " << hasil << " Fahrenheit" << endl; break;
        case 2: hasil = fahrenheitkecelsius(nilai);
            cout << nilai << " Fahrenheit = " << hasil << " Celsius" << endl; break;
        case 3: hasil = celsiuskekelvin(nilai);
            cout << nilai << " Celsius = " << hasil << " Kelvin" << endl; break;
        default: cout << "Pilihan tidak tersedia" << endl; break; }
    return 0; }