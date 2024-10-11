#include <iostream>
#include <string>

// tugas 1 : jumlahkan dua bilangan
int main() { // jumlahkan dua bilangan
    std::cout <<"Jumlahkan dua bilangan berikut ..." << std::endl;

    int a;
    int b;
    int c;
    std::cout << "masukkan bilangan 1 : " ;
    std::cin >> a;
    std::cout << "masukkan bilangan 2 : " ;
    std::cin >> b;
    
    c = a + b;

    std::cout << "Hasil Dari " << a << " + " << b << " = " << c << std::endl;
    
}