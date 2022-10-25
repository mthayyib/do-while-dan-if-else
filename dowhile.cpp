#include <iostream>
using namespace std;

int main()
{
    int baris = 5, i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << j << " ";
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= baris);
    return 0;
}