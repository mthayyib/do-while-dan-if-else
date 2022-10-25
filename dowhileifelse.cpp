#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    string username, password, user, pass;
    int i;

    cout << "----------------------------------------" << endl;
    cout << "Selamat datang di form login" << endl;
    cout << "----------------------------------------" << endl;

    username = "mthayyib";
    password = "1234ab";
    i = 1;

    do
    {
        cout << "Username: ";
        getline(cin, user);
        cout << "Password: ";
        getline(cin, pass);

        if (user == username && pass == password)
        {
            cout << "-----------------------" << endl;
            cout << "Anda berhasil login" << endl;
            cout << "-----------------------" << endl;
            break;
        }
        else
        {
            cout << "-----------------------" << endl;
            cout << "Username atau Password anda salah" << endl;
            cout << "-----------------------" << endl;
            i++;
        }

        if (i > 3)
        {
            cout << "Anda telah 3x memasukkan username dan password yang salah" << endl;
            cout << "Akun anda telah kami blokir" << endl;
        }

    } while (i <= 3);

    return 0;
}