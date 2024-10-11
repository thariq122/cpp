#include <iostream>
#include <string>

//memasukkan sebuah nilai ujian (0-100)
int main() {
    int nilai;

    // Meminta pengguna memasukkan nilai ujian
    std::cout << "Masukkan nilai ujian (0-100): ";
    std::cin >> nilai;

    // Memeriksa apakah nilai lebih dari atau sama dengan 60
    if (nilai >= 60) {
        std::cout << "Lulus" << std::endl;
    } else {
        std::cout << "Tidak Lulus" << std::endl;
    }

    return 0;
}