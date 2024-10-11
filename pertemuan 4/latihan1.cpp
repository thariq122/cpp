#include <iostream>
using namespace std;

int main()
{

    float rerata = 0, pengeluaran;
    for (int minggu = 1; minggu <= 4; minggu++)
    {
        cout << "Pengeluaran perminggu, minggu ke.." << minggu << " : Rp. ";
        cin >> pengeluaran;

        rerata += pengeluaran;
    }
    float total = rerata / 4.0;
    cout << "--------------------------" << endl;
    cout << " Rerata pengeluaran adalah " << total << endl;

    return 0;
}