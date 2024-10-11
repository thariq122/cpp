#include <iostream>
using namespace std;

int main(){
    int kode;
    char diskon;

    cout << "Masukkan kode buku [1/2] = ";cin>>kode;
    cout << "Masukkan kode diskon = ";cin>>diskon;

    if (kode==1) {
        cout << "Judul Buku : Kalkulus" << endl;

        if (diskon == 'D') {
            cout << "Harga Buku : Rp 45000";
        } else {
            cout << "Harga Buku : Rp 50000";
        }
    } else if (kode == 2) {
        cout << "Judul Buku : Pengantar Teknik Komputer " << endl;

        if (diskon == 'D') {
            cout << "Harga Buku : Rp 65000";
        } else {
            cout << "Harga Buku : Rp 70000";
        }
    } else {
        cout << "Kode yang anda masukkan salah";
    }

    return 0;
}