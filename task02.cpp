#include <iostream>
using namespace std;

main()
{
    system("cls");

    for (int x = 1; x <= 10; x++)
    {
        for (int y = 10; y >= x ; y--)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
}