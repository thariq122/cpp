#include <iostream>
using namespace std;

int main()
{
    string nama[100];
    int nilai[100];
    int no;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> no;

    // input data
    for (int i=1;i<=no;i++){
        cout << "Masukkan nama mahasiswa :";
        cin >> nama[i];
        cout << "Masukkan nilai mahasiswa : ";
        cin >> nilai[i];
    }

    //menampilkan data
    cout << "tampilkan data"<< endl;
    for (int a=1;a<=no;a++){
        cout << "nama: "<<nama[a]<<" dengan nilai : "<<nilai[a]<< endl;
    }
    return 0;
}