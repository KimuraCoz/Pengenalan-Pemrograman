#include <iostream>
#include <iomanip>
using namespace std;
double hitungdiskonbelanja(double totalbelanja) {
    if (totalbelanja >= 200000) { return totalbelanja * 0.10; }
    return 0; }
double hitungdiskonmember(double totalbelanja, int statusmember) {
    if (statusmember == 1) { return totalbelanja * 0.05; }
    return 0; }
double hitungtotaldiskon(double totalbelanja, int statusmember) {
    return hitungdiskonbelanja(totalbelanja) + hitungdiskonmember(totalbelanja, statusmember); }
double hitungtotalbayar(double totalbelanja, int statusmember) {
    return totalbelanja - hitungtotaldiskon(totalbelanja, statusmember); }
int main() {
    int statusmember; double totalbelanja;
    cout << "Masukkan total belanja: "; cin >> totalbelanja;
    cout << "Status member (1= member, 0= bukan): "; cin >> statusmember;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Diskon belanja: " << hitungdiskonbelanja(totalbelanja) << endl;
    cout << "Diskon member: " << hitungdiskonmember(totalbelanja, statusmember) << endl;
    cout << "Total diskon: " << hitungtotaldiskon(totalbelanja, statusmember) << endl;
    cout << "Total bayar: " << hitungtotalbayar(totalbelanja, statusmember) << endl;
    return 0; }