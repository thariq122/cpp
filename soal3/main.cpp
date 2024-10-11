#include <iostream>
#include <string>

// tugas 3 : menghitung rata2
int main() { // menghitung rata2
    std::cout <<"hitunglah keempat rata2 tersebut ..." << std::endl;

    double a;
    double b;
    double c;
    double d;
    double f;

    std::cout << "masukkan nilai bilangan 1 : " ;
    std::cin >> a;
    std::cout << "masukkan nilai bilangan 2 : " ;
    std::cin >> b;
    std::cout << "masukkan nilai bilangan 3 : " ;
    std::cin >> c;
    std::cout << "masukkan nilai bilangan 4 : " ;
    std::cin >> d;

    f = (a + b + c + d) / 4;

    std::cout <<"Hasil Dari" << a << " + " << b << " + " << c << " + " << d << " / 4 adalah " << f << std::endl;

}