#include <iostream>
#include <string>

// menentukan lebih besar dari kdua bilangan
int main() { // fungsi utama
    // if-conditioanl
    // if (kondisi) {}
    int a = 4;
    
    if (a>5) { // pengecekan kondisi
        std::cout << " a lebih besar dari 5 " << std::endl;
    }else{
        std::cout << " a lebih kecil dari 5 " << std::endl;
     }
    // mested-if
    if(a>5){
        if(a>10){
            std::cout << " a lebih besar 10 " << std::endl;
        }
    }
}