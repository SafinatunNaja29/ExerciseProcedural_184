#include <iostream>
using namespace std;

int main()
{
    int kandidat[20];
    double Matematika, BahasaInggris, rata2;
    char nama[20];
    char ket[20];
    cout << " Menentukan Kelulusan Nilai Mahasiswa" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Masukkan Data Mahasiswa" << endl;
    cout << "=======================" << endl;
    cout << "Nama Mahasiswa : ";
    cin >> nama, 20;
    cout << "Nilai Matematika : ";
    cin >> Matematika;
    cout << "Nilai Bahasa Inggris : ";
    cin >> BahasaInggris;
    rata2 = (Matematika + BahasaInggris) / 2;
    if (rata2 >= 80) {
       (ket, "DITERIMA");
    }
    else if (rata2 < 70 && rata2 >= 80) {
       (ket, "DITERIMA");
    }
    else if (rata2 < 55 && rata2 >= 45) {
        (ket, "DITOLAK");
    }
 
    cout << "\n";
    cout << "---- Hasil Kelulusan Mahasiswa --- " << endl;
    cout << "===================================" << endl;

    cout << "Nama : Asroni " << nama << endl;
    cout << "Nilai Matematika : " << Matematika << endl;
    cout << "Nilai Bahasa Inggris : " << BahasaInggris << endl;
    cout << "Rata-rata : " << rata2 << endl;
    cout << "Keterangan : DITERIMA " << ket << endl;
    cout << "Nama : Lia " << nama << endl;
    cout << "Nilai Matematika : " << Matematika << endl;
    cout << "Nilai Bahasa Inggris : " << BahasaInggris << endl;
    cout << "Rata-rata :79 " << rata2 << endl;
    cout << "Keterangan : DITERIMA " << ket << endl;

    cout << "Nama : Joko " << nama << endl;
    cout << "Nilai Matematika : " << Matematika << endl;
    cout << "Nilai Bahasa Inggris : " << BahasaInggris << endl;
    cout << "Rata-rata : " << rata2 << endl;
    cout << "Keterangan : DITOLAK " << ket << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nilai Matematika : " << Matematika << endl;
    cout << "Nilai Bahasa Inggris : " << BahasaInggris << endl;
    cout << "Rata-rata : " << rata2 << endl;
    cout << "Keterangan : " << ket << endl;

    cout << "jumlah mahasiswa yang diterima: ";
    cout << "jumlah mahasiswa yang ditolak: "; 

}