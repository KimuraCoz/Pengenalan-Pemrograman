#include <iostream>
using namespace std;

int main(){
    int batas, pilihan, jumlah = 0;
    cout << "Masukkan batas akhir : "; cin >> batas;
    cout << "-----------------------------------" << endl;
    cout << "       MENU" << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Bilangan Genap" << endl;
    cout << "2. Bilangan Ganjil" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Pilihan : "; cin >> pilihan;
    switch(pilihan){
        case 1:
            cout << "Bilangan Genap : ";
            for(int i=1; i<=batas; i++){
                if(i % 2 == 0){
                    cout << i << " ";jumlah += i;} }
            cout << endl; cout << "Jumlah : " << jumlah << endl; break;
        case 2:
            cout << "Bilangan Ganjil : ";
            for(int i=1; i<=batas; i++){
                if(i % 2 != 0){
                    cout << i << " ";
                    jumlah += i;} }
            cout << endl; cout << "Jumlah : " << jumlah << endl; break;
        default:
            cout << "Pilihan tidak tersedia" << endl;}
    return 0;}