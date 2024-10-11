#include <iostream>
#include <string>

// Buat program C++ yang meminta pengguna untuk memasukkan tiga angka. Tampilkan angka terbesar dari ketiga angka tersebut.
int main(){
    std::cout << " Tampilakn angka terbesar dari ketiga angka tersebut ..." << std::endl;

    int angka1;
    int angka2;
    int angka3;

    // masukkan tiga angka
    std::cout << " masukkan tiga angka dari yang terbesar " << std::endl;
    std::cin >> angka1 >> angka2 >> angka3;

    // mencari angka terbesar
    int angkaTerbesar = angka1;

    if(angka2 > angkaTerbesar) {
        angkaTerbesar = angka2;
    }

    if(angka3 > angkaTerbesar) {
        angkaTerbesar = angka3;
    }

    // tampilkan angka terbesar
    std::cout << " angka terbesar adalah = " << angkaTerbesar << std::endl;

}
