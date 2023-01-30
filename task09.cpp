#include <iostream>
using namespace std;

main()
{
    system("cls");

    int rows, finalrows, spaces, steriks;

    cout << "Enter desired Number of rows: ";
    cin >> rows;
    cout << endl;

    // because the shape will be symmetrical
    finalrows = rows * 2;

    steriks = 0;

    for (int x = 1; x <= rows; x++)
    {
        steriks = steriks + 1;
        spaces = finalrows - 2;

        for (int y = 1; y <= steriks; y++)
        {
            cout << "*";
        }

        for (int t = 1; t <= spaces; t++)
        {
            cout << " ";
        }

        for (int z = 1; z <= steriks; z++)
        {
            cout << "*";
        }

        finalrows = finalrows - 2;

        cout << endl;
    }
}