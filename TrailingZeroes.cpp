#include <iostream>
using namespace std;

int TrailingZeroes(int);

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << endl << "Number of Trailing Zeroes in factorial are: " << TrailingZeroes(n);
    return 0;
}

int TrailingZeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n/i;
    }
    return res;
}