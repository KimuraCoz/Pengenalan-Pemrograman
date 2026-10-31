#include <iostream>
using namespace std;

int main(){
    int n, nilai, lulus = 0, tidak = 0, total = 0; double rata;
    cout << "Jumlah mahasiswa : "; cin >> n;
    for(int i=1; i<=n; i++){
        cout << "Nilai mahasiswa ke-" << i << " : "; cin >> nilai;
        if(nilai >= 60){ lulus++; } 
        else { tidak++; }
        total += nilai; }
    rata = static_cast<double>(total) / n;
    cout << "Jumlah Lulus : " << lulus << endl;
    cout << "Jumlah Tidak Lulus : " << tidak << endl;
    cout << "Total Nilai : " << total << endl;
    cout << "Rata-rata : " << rata << endl;
    return 0;}