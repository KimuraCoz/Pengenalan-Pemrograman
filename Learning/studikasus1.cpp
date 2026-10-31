#include <iostream>
using namespace std;

// int main() {
//     cout << "=== IDENTITAS MAHASISWA ===\n";
//     cout << "NIM\t: 13020260028\n";
//     cout << "Nama\t: budi santoso\n";
//     cout << "Jurusan\t: teknik informatika\n";
//     cout << "===========================\n";
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int nim = 13020260028;
    cout << "tanpa escape sequence:\n";
    cout << "nim: " << nim << " nama: budi\n";
    
    cout << "pakai escape sequence:\n";
    cout << "nim:\t" << nim << "\nnama:\tbudi\n";
    
    return 0;
}