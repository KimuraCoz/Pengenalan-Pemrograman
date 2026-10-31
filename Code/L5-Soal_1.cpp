#include <iostream>
using namespace std;

int main(){
    int batas, hasil = 1, jumlah = 0;
    cout << "Masukkan batas: "; cin >> batas;
    if(batas < 1){
        cout << "Batas tidak valid" << endl;} 
    else {
        for(int i=1; i<=batas; i++){
            hasil *= i;
            jumlah += hasil;
            cout << hasil << " ";}
        cout << endl;
        cout << "Jumlah seluruh bilangan = " << jumlah << endl;}
    return 0;}