#include <iostream>
using namespace std;

int main(){

    int nilaiUTS, nilaiUAS, nilaiTugas, nilaiAkhir;
    char nilaiHuruf;

    cout << "Masukkan Nilai UTS: ";cin>>nilaiUTS;
    cout << "Masukkan Nilai UAS: ";cin>>nilaiUAS;
    cout << "Masukkan Nilai Tugas: ";cin>>nilaiTugas;

    nilaiAkhir=((35*nilaiUTS)+(45*nilaiUAS)+(20*nilaiTugas))/100;

    switch(nilaiAkhir){
    case 85 ... 100:
        nilaiHuruf='A';
        break;
    case 70 ... 84:
        nilaiHuruf='B';
        break;
    case 55 ... 69:
        nilaiHuruf='C';
        break;
    case 40 ... 54:
        nilaiHuruf ='D';
        break;
    default:
        nilaiHuruf='E';

    }

    cout << "Nilai Akhir: " <<nilaiAkhir<<endl;
    cout << "Nilai Huruf: " <<nilaiHuruf;

    return 0;
}