#include <iostream>

using namespace std;

int main()
{
    string inputData1, inputData2;

    cout << " Masukkan kata 1 : " << endl;
    cin >> inputData1;
    cout << " Masukkan kata 2 : " << endl;
    cin >> inputData2;

    string var1= inputData1;
    string var2= inputData2;
    string var3= var1 +" "+ var2;

    cout << var3 << endl;

    return 0;

}