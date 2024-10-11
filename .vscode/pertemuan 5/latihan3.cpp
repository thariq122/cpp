#include <iostream>
#include <string>

using namespace std;

int main()
{

    string kata;
    cout << " Buatlah sebuah kata : ";getline(cin, kata);
    for(char & k : kata)
    {
        if(k == 'a'){
            k = 'i';
        }

    }
    cout << " kata a diganti dengan i : " << kata << endl;

    return 0;


}