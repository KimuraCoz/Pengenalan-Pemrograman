#include <iostream>
using namespace std;

int main()
{
    double nilai;

    cout << "nilai akhir : ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100)
    {
        cout << "Nilai tidak valid" << endl;
    }
    else
    {
        cout << "nilai : " << nilai << endl;

        if (nilai >= 60)
        {
            cout << "status : Lulus" << endl;
        }
        else
        {
            cout << "status : Tidak Lulus" << endl;
        }

        if (nilai >= 80)
        {
            cout << "dapat peringkat A" << endl;
        }
        else if (nilai >= 70)
        {
            cout << "dapat peringkat B" << endl;
        }
        else if (nilai >= 60)
        {
            cout << "dapat peringkat C" << endl;
        }
        else if (nilai >= 50)
        {
            cout << "dapat peringkat D" << endl;
        }
        else
        {
            cout << "dapat peringkat E" << endl;
        }
    }

    return 0;
}