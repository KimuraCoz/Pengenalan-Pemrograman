#include <iostream>
using namespace std;

int main(){
    int batas, genap = 0, ganjil = 0;
    cout << "Masukkan batas akhir: "; cin >> batas;
    cout << "Bilangan Genap: ";
    for(int i=1; i<=batas; i++){
        if(i % 2 == 0){
            cout << i << " ";
            genap++;}
    }
    cout << endl;
    cout << "Bilangan Ganjil: ";
    for(int i=1; i<=batas; i++){
        if(i % 2 != 0){
            cout << i << " ";
            ganjil++;}
    }
    cout << endl;
    cout << "Jumlah bilangan genap: " << genap << endl;
    cout << "Jumlah bilangan ganjil: " << ganjil << endl;
    return 0;}