#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputData;

    cout << " Masukkan kata : ";getline (cin, inputData);

    cout << " Karakter Pertama = " << inputData.front() << endl;
    cout << " Karakter Kedua = " << inputData.back() << endl;

    cin.get();
    return 0;
}