#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total, batas, diskon, nominal, bayar;
    int member, digit;

    cout << "total transaksi : ";
    cin >> total;
    cout << "status member (1/0) : ";
    cin >> member;
    cout << "dua digit terakhir stambuk : ";
    cin >> digit;

    batas = 400000 + (digit * 1000);
    diskon = 0;

    if(total >= batas){
        diskon = 10;
        if(member == 1){
            diskon = diskon + 5;
        }
    }

    nominal = total * diskon / 100;
    bayar = total - nominal;

    cout << fixed << setprecision(2);
    cout << "batas transaksi : Rp" << batas << endl;
    cout << "total transaksi : Rp" << total << endl;
    cout << "persentase diskon : " << diskon << "%" << endl;
    cout << "nominal diskon : Rp" << nominal << endl;
    cout << "total bayar : Rp" << bayar << endl;

    return 0;
}