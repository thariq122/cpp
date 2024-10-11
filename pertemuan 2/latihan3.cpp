#include<iostream>
using namespace std;

int main(){

    double hargabrg, diskon, hargaakhir, hasil, hasil_diskon;

    cout<< "Masukkan harga barang = ";cin>>hargabrg;
    cout<< "Masukkan diskon = ";cin>>diskon;

    hasil=hargabrg*diskon;
    hasil_diskon=hargabrg-hasil;
    cout << "Harga setelah diskon : "<<hasil_diskon<<endl;
    cout << "Harga diskon : "<<hasil;
    
}