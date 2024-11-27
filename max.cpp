#include <iostream>
using namespace std;
void max(int a, int b);
int max_1(int a ,int b);
int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    cout << max_1(n, m);
    // max(n, m);
    return 0;
}
void max(int a, int b)
{
    cout << (a > b) ? a : b;
}

int max_1(int a, int b)
{
    return (a > b) ? a : b;
}