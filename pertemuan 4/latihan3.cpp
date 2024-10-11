#include <iostream>
using namespace std;

int main()
{
    int inputBilangan;
    cout << " Masukkan Bilangan : ";
    cin>> inputBilangan;

    int jumlahBilangan = 10;
    int a = 0;
    int hasil = 0;
    while (a < jumlahBilangan){
        if (inputBilangan % 2 !=0)
        {
            cout << inputBilangan;
            if (a <9)
            {
                cout << " + ";
            }
            a++;
            hasil += inputBilangan;
        }
        inputBilangan++;

    }
    cout << " = " << hasil << endl;
    return 0;
}