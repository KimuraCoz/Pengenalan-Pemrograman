#include <iostream>
using namespace std;

int main(){
	const double BOBOT_TUGAS = 0.30;
	const double BOBOT_UTS = 0.30;
	const double BOBOT_UAS = 0.40;
	const double BONUS = 2.0;
	const int JUMLAH_PERTEMUAN = 14;
	
	int tugas, uts, uas, hadir;
	
	cout << "Masukkan Nilai Tugas : ";
	cin >> tugas;
	cout << "Masukkan Nilai UTS : ";
	cin >> uts;
	cout << "Masukkan Nilai UAS : ";
	cin >> uas;
	cout << "Jumlah Kehadiran : ";
	cin >> hadir;
	
	double nilaiSebelumBonus = (tugas*BOBOT_TUGAS)+(uts*BOBOT_UTS)+(uas*BOBOT_UAS);
	double nilaiAkhir = nilaiSebelumBonus;
	nilaiAkhir = nilaiAkhir + BONUS;
	
	double persentaseHadir = static_cast<double>(hadir)/JUMLAH_PERTEMUAN*100;
	
	bool nilaiLolos = (nilaiAkhir >= 75);
	bool hadirLolos = (persentaseHadir >= 80);
	bool keduanya = nilaiLolos && hadirLolos;
	
	cout << fixed;
	cout.precision(2);
	
	cout << "=========================================" << endl;
	cout << "	HASIL PERHITUNGAN NILAI" << endl;
	cout << "=========================================" << endl;
	cout << endl;
	cout << "Nilai Tugas :" << tugas << endl;
	cout << "Nilai UTS	:" << uts << endl ;
	cout << "NilaI UAS	:" << uas << endl ;
	cout << "Jumlah Kehadiran : " << hadir << " dari " << JUMLAH_PERTEMUAN << endl;
	cout << endl;
	cout << "Nilai Sebelum Bonus : " << nilaiSebelumBonus << endl;
	cout << "Bonus	: " << BONUS << endl;
	cout << "Nilai Akhir	: " << nilaiAkhir << endl;
	cout << "Persentase Kehadiran	: " << persentaseHadir << "%" << endl;
	cout << endl;
	cout << "-----------------------------------------" << endl;
	cout << "HASIL EVALUASI LOGIKA" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
	cout << "Nilai Akhir >= 75	: "<< nilaiLolos << endl;
	cout << "Kehadiran >= 80% 	: "<< hadirLolos << endl;
	cout << "Keduanya Terpenuhi	: "<< keduanya << endl;
	cout << "=========================================" << endl;
	
	return 0;
}