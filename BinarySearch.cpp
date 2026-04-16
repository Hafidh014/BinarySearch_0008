#include<iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void input()    
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> npanjang;

        if (npanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silakan coba lagi.\n";
        }
    }


     cout <<"\n========================================\n";
     cout << "        Masukkan Elemen Array        \n";
     cout <<"\n========================================\n";

    for (int i = 0; i < npanjang; i++)
    {
        cout << "data ke-" << i + 1 << ": ";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= npanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1]) {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= npanjang - 1);
}

void display()
{
    cout << "\n========================================\n";
    cout << "        Elemen Array Setelah Diurutkan (Asc)       \n";
    cout << "\n========================================\n";

    for (int i = 0; i < npanjang; i++)
    {
        cout << element[i] << " ";
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\nMasukan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = npanjang - 1;

        do
        {
            int mid = (low + high) / 2;

           if (element[mid] == x)
            {
                cout << "\nElemen ditemukan pada indeks ke-" << mid + 1 << endl;
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        }while (low <= high);
    }
}