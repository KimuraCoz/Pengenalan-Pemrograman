#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double total, diskon, nominal, bayar;
    int member;

    cout << "Masukkan total belanja : ";
    cin >> total;
    cout << "Status member (1/0) 	: ";
    cin >> member;

    diskon = 0;

    if(total >= 500000){
        diskon = 10;
        if(member == 1){
            diskon = diskon + 5;
        }
    }

    nominal = total * diskon / 100;
    bayar = total - nominal;

	cout << fixed << setprecision(0);
	cout << "" << endl;
    cout << "Total Belanja	: Rp" << total << endl;
    cout << "Diskon 		: " << diskon << "%" << endl;
    cout << "Total Bayar 	: Rp" << bayar << endl;

    return 0;
}