#include <iostream>

using namespace std;

int main()
{
    string inputData;

    cout << " Masukkan sebuah makalah : " ;getline(cin, inputData);

    string var= inputData;

    cout << " Panjang total kata dari makalahnya adalah : " << var.length() << endl;

    return 0;
}