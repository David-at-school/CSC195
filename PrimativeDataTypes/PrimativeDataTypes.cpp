#include <iostream>
#include <array>
using namespace std;

int main()
{
    string name;
    char initial;
    short age;
    bool isAdult;
    int zipcode;
    float wage = 0;
    short daysWorked = 0;
    short hoursWorkedPerDay[7] = { };

    const float tax = 0.25f;
    short totalHours = 0;
    float grossIncome = 0;
    float netIncome = 0;

    cout << "enter first name: ";
    cin >> name;
    cout << "enter last initial: ";
    cin >> initial;
    cout << "enter age: ";
    cin >> age;
    isAdult = false;
    if (age >= 18)
    {
        isAdult = true;
    }
    cout << "enter zipcode: ";
    cin >> zipcode;

    cout << "enter wage: ";
    cin >> wage;

    cout << "enter days worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "enter hours worked for day " << i+1 << ": ";
        cin >> hoursWorkedPerDay[i];
    }

    totalHours = 0;
    //cout << sizeof(hoursWorkedPerDay)/sizeof(hoursWorkedPerDay[0]) << endl;
    for (int j = 0; j < sizeof(hoursWorkedPerDay) / sizeof(hoursWorkedPerDay[0]); j++)
    {
        //cout << hoursWorkedPerDay[j] << endl;
        totalHours = totalHours + hoursWorkedPerDay[j];
    }
    grossIncome = totalHours * wage;
    netIncome = grossIncome * (1 - tax);

    cout << name << " worked " << totalHours << " hours at $" << wage << " an hour.\n" << endl;
    cout << "gross income: " << grossIncome << endl;
    cout << "net income: " << netIncome << endl;
}