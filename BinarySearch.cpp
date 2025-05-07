#include <iostream>
using namespace std;

int elemen[10];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> n;

        if (n <= 10)
        {
            break;
        }
        else
        {
            cout << "\nJumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }
}