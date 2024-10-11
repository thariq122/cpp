#include<iostream>
using namespace std;

int main(){

    int panjang;
    int lebar;
    int tinggi;
    int hasil;

    cout<< "Masukkan panjang balok = ";cin>>panjang;
    cout<< "Masukkan lebar balok = ";cin>>lebar;
    cout<< "Masukkan tinggi balok = ";cin>>tinggi;

    hasil=panjang*lebar*tinggi;
    cout<< "Hasilnya adalah : "<<hasil;

    return 0;
}