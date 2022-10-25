#include <iostream>
using namespace std;

int main()
{
    int i, angka;
    bool prima = true;
    //program untuk mengecek bilangan prima atau bukan

    cout << "Masukkan angka: ";
    cin >> angka;

    // 0 dan 1 bukan bilangan prima
    // || artinya or
    if (angka == 0 || angka == 1)
    {
        prima = false;
    }
    else
    {
        for (i = 2; i <= angka / 2; ++i)
        {
            if (angka % i == 0)
            {
                prima = false;
                break;
            }
        }
    }
    if (prima)
        cout << angka << " adalah bilangan prima";
    else
        cout << angka << " bukan bilangan prima";
    return 0;
}