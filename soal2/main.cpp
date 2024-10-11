#include <iostream>
#include <string>
// tugas 2 : menghitung luas segitiga
int main() { // menghitung luas segitiga
     std::cout <<"hitunglah luas segitiga berikut ..." << std::endl;

    double tinggi;
    double alas;
    double luas;

    std::cout << "masukkan nilai alas : " ;
    std::cin >> alas;
    std::cout << "masukkan bilangan tinggi : " ;
    std::cin >> tinggi;

    luas = alas * tinggi / 2;

    std::cout << "Hasil Luas Dari " << alas << " * " << tinggi << " /2 adalah " << luas << std::endl;
}