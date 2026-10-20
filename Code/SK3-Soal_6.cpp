#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;
    if (nilai >= 60)
    {
        cout << "Status: Lulus" << endl;

        if (nilai >= 80)
        {
            cout << "Keterangan: Sangat Baik" << endl;
        }
    }
    else
    {
        cout << "Status: Tidak Lulus" << endl;
    }
    return 0;
}