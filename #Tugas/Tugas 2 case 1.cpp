#include <iostream>
using namespace std;

int main(){
	string nama;
	int NIM, nilai1, nilai2, nilai3, rata2;
	
	cout << "ALOGARITMA MENGHITUNG NILAI RATA RATA MAHASISWA" <<endl;
	cout << " Masukan Nama Mahasiswa :" ;
	cin>>nama;
	cout << " Masukan NIM :" ;
	cin>>NIM;
	cout << " Masukan Nilai Tugas 1 :" ;
	cin>>nilai1;
	cout << " Masukan Nilai Tugas 2 :" ;
	cin>>nilai2;
	cout << " Masukan Nilai Tugas 3 " ;
	cin>>nilai3;
	
	rata2 = (nilai1+nilai2+nilai3)/3;
	
	cout << "ALOGARITMA MENGHITUNG NILAI RATA RATA MAHASISWAR" <<endl;
	cout << "Nama Mahaiswa : " << nama << endl;
	cout << "NIM : " << NIM << endl;
	cout << "Nilai Tugas 1 : " << nilai1 << endl;
	cout << "Nilai Tugas 2 : " << nilai2 << endl;
	cout << "Nilai Tugas 3 : " << nilai3 << endl;
	cout << "Jadi Siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;
	
	return 0;
}
