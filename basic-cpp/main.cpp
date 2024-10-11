#include <iostream>
#include <string>

// program utama
int main() { // fungsi utama
    std::cout <<"Apa kabar ...." << std::endl;

    // deklarasi variabel
    // tipe_variabel nama_variabel;
    // tipe_variabel nama_variabel = nilai;
    int a;
    int b;
    int c;

    a = 10;
    b = 20;
    c = a + b;

    std::cout << "Hasil dari " << a << " + " << b << " = " << c << std::endl;

    float d = 10.5;
    double e = 4.8;
    char k = 'A';
    std::string m = "Hellow World";
    bool n = true; // false

    // aritmatika
    // + - * / %
    // / bagi
    // % modulus (sisa bagi)

    // input dan output
    // hitung luas persegi panjang
    // double panjang, lebar, luas;
    // std::cout << "Masukkan panjang ";
    // std::cin >> panjang;
    // std::cout << "Masukkan lebar ";
    // std::cin >> lebar;
    // luas = panjang * lebar;

    // std::cout << "Luas persegi panjang; " << luas << std::endl;

    std::cout << "========================" << std::endl;
    std::string nama;
    std::cout << "Nama anda ";
    std::getline(std::cin, nama);

    std::cout << "Halo ," << nama << ", apa kabar?" << std::endl;

    return 0; // mengembalikan nilai 0
}