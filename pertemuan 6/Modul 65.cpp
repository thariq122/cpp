#include <iostream>
using namespace std;

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += data[i];
    }

    double average = static_cast<double>(sum) / 5;
    cout << "Rata-rata: " << average << endl;

    return 0;
    
}