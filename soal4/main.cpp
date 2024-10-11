#include <iostream>
#include <string>

// tugas 3 : menghitung luas lingkaran
int main() { // menghitung luas lingkaran
    std::cout <<"hitunglah luas lingkaran tersebut ..." << std::endl;

    double r;
    double luas;

    std::cout << "masukkan nilai r : " ;
    std::cin >> r;

    luas = 3.14 * r * r;

    std::cout << " Hasil dari Luas lingkaran " << 3.14 << " * " << r << " * " << r << " adalah " << luas << std::endl;

}