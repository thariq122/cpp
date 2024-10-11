#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    string inputData;

    cout << "Masukkan Kata : ";
    cin >> inputData;

    for (a=0; a < inputData.length();++a){
        cout << inputData.substr(a) << endl;
    }

    return 0;
}