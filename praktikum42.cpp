#include <iostream>
using namespace std;

int main()
{
    int awal, akhir;

    cout << " Masukkan nilai awal bilangan : ";
    cin >> awal;
    cout << " Masukkan nilai akhir bilangan : ";
    cin >> akhir;

    cout << endl;
    cout << " Menampilkan bilangan genap dari " << awal << " hingga " << akhir << endl;
    while(awal<=akhir)
    {
        if(awal%2==0){
            cout << awal << endl;
        }

        awal++;
    }

    return 0;
}