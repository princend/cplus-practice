#include <iostream>
using namespace std;

int main()
{
    int income = 0, tax = 0;
    cout << "please enter ur num";
    cin >> income;

    if (income <= 10000)
        tax = 0.02 * income;
    if (income > 10000)
        tax = 0.08 * (income - 10000) + 200;
    cout << "Tax amount: $" << tax << "\n";    
}