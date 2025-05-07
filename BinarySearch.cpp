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
void display()
{
    cout << "==============================\n";
    cout << "Elemen Array Setelah Diurutkan (Asc)\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++)
    {
        cout << elemen[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}
void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==============================\n";
        cout << "Pencarian Binary Search\n";
        cout << "==============================\n";

        int item;
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> item;

        int low = 0;
        int high = n - 1;

        do
        {
            int mid = (low + high) / 2;

            if (elemen[mid] == item)
            {
                cout << "\nElemen " << item << " ditemukan pada indeks ke-" << mid << ".\n";
                return;
            }
            else if (item < elemen[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
  } while (low <= high);

        cout << "\nMaaf! Elemen " << item << " tidak ditemukan dalam array.\n";

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}