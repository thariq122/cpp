//Mencari panjang sebuah STRING
#include <iostream>

using namespace std;

int main()
{
    string var1 = "Belajar Dasar Pemrograman";
    string var2 = "Menyenangkan";
    string var3 = "Belajar Karna butuh ";

    cout << "Panjang string var1 adalah " << var1.length() <<endl;
    cout << "Panjang string var2 adalah " << var2.length() <<endl;
    cout << "Panjang string var3 adalah " << var3.size() <<endl;

    return 0;
}