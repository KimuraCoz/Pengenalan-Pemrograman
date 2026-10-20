#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long stambuk;
    double tugas, uts, uas, nilai, bonus, akhir;

    cout << "stambuk : ";
    cin >> stambuk;
    cout << "nilai tugas : ";
    cin >> tugas;
    cout << "nilai uts : ";
    cin >> uts;
    cout << "nilai uas : ";
    cin >> uas; 

    nilai = (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
    bonus = (stambuk % 10) % 5;
    akhir = nilai + bonus;

    if(akhir > 100){
        akhir = 100;
    }

    cout << fixed << setprecision(2);
    cout << "stambuk : " << stambuk << endl;
    cout << "nilai sebelum bonus : " << nilai << endl;
    cout << "bonus : " << bonus << endl;
    cout << "nilai akhir : " << akhir << endl;

    return 0;
}