#include <iostream>
using namespace std;

main()
{
    system("cls");
    
    int rows, rowsduplicate, spaces, steriks, halfrows;
    cout << "Enter desired Number of rows: ";
    cin >> rows;
    cout << endl;

    halfrows = rows / 2 ;
    rowsduplicate = halfrows;


    // loop to print upper end
    for (int x = 1; x <= halfrows; x++)
    {
        // for how much time should spaces be printed on console
        spaces = rowsduplicate - 1;

        // for how much time should *'s be printed on console
        steriks = halfrows - spaces;
        for ( int y = 1; y <= spaces; y++ )
        {
            cout << " ";
        }
        for ( int z = 1; z <= steriks; z++ )
        {
            cout << "*" ;
        }

        rowsduplicate = rowsduplicate - 1;
        cout << endl ;
    }

    // reinitalized coz, previous loop reduced rowsduplicate to zero
    rowsduplicate = halfrows;
    spaces = 0;

    // loop to print lower end
    for (int x = 1; x <= halfrows; x++)
    {
        spaces = spaces + 1 ;
        steriks = rowsduplicate - spaces ;

        for ( int y = 1; y <= spaces; y++ )
        {
            cout << " ";
        }
        for ( int z = 1; z <= steriks; z++ )
        {
            cout << "*" ;
        }

        cout << endl ;
    }
}