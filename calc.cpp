#include <iostream>
using namespace std;

int main()
{

    int month;
    int year;
    cout << "give month";
    cin >> month;
    cout << "give year";
    cin >> year;
    int isBigMonth = month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12;
    int isSmallMonth = month == 4 || month == 6 || month == 9 || month == 11;
    int isLeapYear = month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    if (isLeapYear)
    {
        cout << "29 days";
    }
    if (isBigMonth)
    {
        cout << "31 days";
    }
    else
    {
        cout << "30 days";
    }
    return 0;
}