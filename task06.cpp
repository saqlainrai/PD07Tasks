#include <iostream>
using namespace std;

main()
{
    system("cls");

    int countDays, treated, untreated;
    int totaltreated=0, totaluntreated=0;
    float sum = 0;
    int doctors = 7;
    int patients;

    cout << "Enter Number of days you visited Hospital: ";
    cin >> countDays;
    cout << endl;

    for (int x = 1; x <= countDays; x++)
    {
        cout << "Number of patients who visited hospital: ";
        cin >> patients;
        cout <<endl;

        if (x % 3 == 0 && totaluntreated > totaltreated)
        {
            doctors = doctors + 1;
        }

        if (patients <= doctors)
        {
            treated = patients;
            untreated = 0;
        }
        else
        {
            treated = doctors;
            untreated = patients - treated;
        }
        totaltreated  = totaltreated + treated;
        totaluntreated = totaluntreated + untreated;

    }

    cout << "Treated Patients: " << totaltreated << endl;
    cout << "Untreated Patients: "<< totaluntreated<<endl;
    
    cout << endl;
}