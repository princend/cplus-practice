#include <iostream>
using namespace std;

int main(){
    int number1;
    int number2;
    int sum;

    cout << "Enter first integer: ";
    cin >> number1;
    cout << "Enter second integer: ";
    cin >> number2;

    sum = number1 + number2;

    cout << number1 << " + " << number2 << " = " << sum;

    return 0;
}