#include <iostream>
using namespace std;

int main(){
    long long stambuk;
    double nilai;
    int digit;
    string kelompok, kategori;

    cout << "stambuk : ";
    cin >> stambuk;
    cout << "nilai praktikum : ";
    cin >> nilai;

    digit = stambuk % 10;

    if(digit % 2 == 0){
        kelompok = "Kelompok A";
    }
	else{
        kelompok = "Kelompok B";
    }

    cout << "stambuk : " << stambuk << endl;
    cout << "kelompok mahasiswa : " << kelompok << endl;
    cout << "nilai : " << nilai << endl;

    if(nilai < 0 || nilai > 100){
        cout << "Nilai tidak valid" << endl;
    }
    else{
        if(nilai >= 85){
            cout << "kategori mu Sangat Baik";
        }
		else if(nilai >= 70){
            cout << "kategori mu Baik";
        }
		else if(nilai >= 60){
            cout << "kategori mu Cukup";
        }
		else{
            cout << "kategori mu Perlu Perbaikan";
        }
    }

    return 0;
}