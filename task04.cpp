#include <iostream>
using namespace std;

main()
{
    system("cls");

    int number;

    cout << "Enter the Higher Bound: ";
    cin >> number;
    cout << endl;

    for (int x = 1; x <= number; x++)
    {
        if (x % 4 != 0)
        {
            cout << x << ", ";
        }
        if (x % 4 == 0)
        {
            cout << x * 10 << ", ";
        }
    }
}