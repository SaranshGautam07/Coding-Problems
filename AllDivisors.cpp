#include <iostream>
using namespace std;

void printdivisors(int);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    printdivisors(n);
    return 0;
}

void printdivisors(int n) // time complexity = O(sqrt n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << endl << i;
        }
    }

    for (; i >= 1; i--)
    {
        if(n % i == 0)
        {
            cout<< endl << n / i;
        }
    }
}