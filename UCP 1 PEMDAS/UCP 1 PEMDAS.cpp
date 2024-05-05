// 1. int,float,string
// 2. Conditional Statement adalah ketika program menggunakan jika-maka. contohnya jika nilai matematika lebih dari 60 maka dinyatakan lulus.
// 3. Struct adalah untuk membuat struktur. contohnya adalah dalam membuat struktur 
// 4. Prosedur dan Fungsi adalah mengulang program dan fungsi adalah membuat function
// 5, Looping adalah Pengulangan.

#include <iostream>
using namespace std;


class Mahasiswa {
public: 
	string nama;
	string status;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "status: " << status << endl;
	}

};



int main()
{
    int NilaiMatematika, NilaiFisika, Rerata;
    string status;

    cout << "Masukkan nilai Matematika ";
    cin >> NilaiMatematika;

    cout << "Masukkan nilai Fisika ";
    cin >> NilaiFisika;

    Rerata = (NilaiMatematika + NilaiFisika) / 2;

    if (Rerata > 80) {
        status = "Lulus";
    }
    else if (NilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai Matematika " << NilaiMatematika << endl;
    cout << "Nilai Fisika " << NilaiFisika << endl;
    cout << "Rerata " << Rerata << endl;
    cout << "Anda Dinyatakan " << status << endl;

	Mahasiswa mhs;

	mhs.nama = "Asroni";
	mhs.status = "Diterima";
	mhs.output();

	mhs.nama = "Lia";
	mhs.status = "Diterima";
	mhs.output();

	mhs.nama = "Joko";
	mhs.status = "Ditolak";
	mhs.output();
}


