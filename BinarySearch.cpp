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

    cout << "==============================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "==============================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> elemen[i];
    }
    
void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int i = 0; i <= n - pass - 1; i++)
        {
            if (elemen[i] > elemen[i + 1])
            {
                int temp = elemen[i];
                elemen[i] = elemen[i + 1];
                elemen[i + 1] = temp;
            }
        }
        pass++;
    } while (pass < n);
}
