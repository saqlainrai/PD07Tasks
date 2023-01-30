#include <iostream>
using namespace std;

main()
{
    system("cls");

    int triangle;
    int count;
    int sline=0;
    int final=0;

    cout << "Enter desired Triangular Number: ";
    cin >> triangle;
    cout << endl;

    final = triangle;
    count = triangle;

    for (int x = 1; x < count; x++)
    {
        sline = triangle - 1;
        final = sline + final;
        triangle = sline ;
    }
    
    cout << final <<endl ;
}