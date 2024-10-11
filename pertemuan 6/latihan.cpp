#include <iostream>
using namespace std;

int main()
{
    int JM;
    string NM, NIM, Nama, Nim;
    float Nilai, maxNilai = 0;
    float TotalNilai, ratarata;

    cout << "Masukkan Jumlah Mahasiswa : "; cin >> JM;

    for(int i=1;i<=JM;i++){
        cin.ignore();
        cout << "------- Mahasiswa" << i << " --------" << endl;
        cout << "Nama : ";getline(cin,NM);
        cout << "NIM :";cin >> NIM;
        cout << "Nilai:";cin >> Nilai;

        if (Nilai > maxNilai){
        maxNilai = Nilai;
        Nama = NM;
        Nim = NIM;
        }  
    }
    
    TotalNilai += Nilai;
    ratarata= TotalNilai / JM;

    cout << "\n------[Mahasiswa Dengan Nilai Tertinggi]---------" << endl;
    cout << "Nama : " << Nama << endl;
    cout << "Nim : " << Nim << endl;
    cout << "Nilai: " << maxNilai << endl;
    cout << "Rata-rata : " << ratarata << endl;


    return 0;
}