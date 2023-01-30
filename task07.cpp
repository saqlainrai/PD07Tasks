#include <iostream>
using namespace std;

main()
{
    system("cls");
    
    float numbers;
    int number;
    float count1=0, count2=0, count3=0;
    float p1=0, p2=0, p3=0;

    cout << "Enter The Number of Integers: ";
    cin >> numbers;
    cout << endl;

    for ( int x = 1 ; x <= numbers; x++)
    {
        cout << "Enter the Number: ";
        cin >> number;
        cout << endl;

        if (number % 2 == 0)
        {
            count1 = count1 + 1;
        }
        if (number % 3 == 0)
        {
            count2 = count2 + 1;
        }
        if (number % 4 == 0)
        {
            count3 = count3 + 1;
        }
    }
    
    p1 = ( count1 * 100 ) / numbers;
    p2 = ( count2 * 100 ) / numbers;
    p3 = ( count3 * 100 ) / numbers;

    cout<<"p1: "<<p1<<endl;
    cout<<"p2: "<<p2<<endl;
    cout<<"p3: "<<p3<<endl;
}