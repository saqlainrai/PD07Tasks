#include <iostream>
using namespace std;

main()
{
    system("cls");

    float cargo;
    float tonnage;
    float count1=0, count2=0, count3=0;
    float sum=0;
    float sum1=0, sum2=0, sum3=0;
    float p1=0, p2=0, p3=0;
    float average=0;

    cout << "Enter the count of cargo for transportation: ";
    cin >> cargo;
    cout << endl;

    for (int x = 1; x <= cargo; x++)
    {
        cout << "Enter the tonnage of current cargo: ";
        cin >> tonnage;
        cout << endl;

        sum = sum + tonnage;

        if ( tonnage >= 1 && tonnage <= 3)
        {
            count1 = count1 + 1;
            sum1 = sum1 + tonnage;
        }
        if ( tonnage > 3 && tonnage <= 11)
        {
            count2 = count2 + 1;
            sum2 = sum2 + tonnage;
        }
        if ( tonnage > 11 && tonnage <= 1000)
        {
            count3 = count3 + 1;
            sum3 = sum3 + tonnage;
        }

    }

    average = ((sum1 * 200) + (( sum2 * 175 ) + ( sum3 * 120 ))) / sum;

    p1 = (sum1 * 100) / sum;
    p2 = (sum2 * 100) / sum;
    p3 = (sum3 * 100) / sum;

    cout << average << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
}