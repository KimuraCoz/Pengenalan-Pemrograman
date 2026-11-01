#include <iostream>
using namespace std;
int main(){
    int n; cout << "Masukkan jumlah baris: "; cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i % 2 != 0){ cout << i;} 
            else { cout << "*";} }
        cout << endl;}
    return 0;}