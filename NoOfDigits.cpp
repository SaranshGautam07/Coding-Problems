//To Find Number of digits of a given number

#include <iostream>
#include <cmath>
using namespace std;

int iterativecount(int);
int recursivecount(int);
int logarithmiccount(int);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    //Iterative Solution
    cout<< endl << "Number of Digits is: " << iterativecount(n);

    //Recursive Solution
    cout<< endl << "Number of Digits is: " << recursivecount(n);

    //Logarithmic Solution
    cout<< endl << "Number of Digits is: " << logarithmiccount(n);
    
    return 0;
}

int iterativecount(int n)
{
    int count = 0;
    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int recursivecount(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (1 + recursivecount(n/10));
}

int logarithmiccount(int n)
{
    return (floor(log10(n)) + 1);

}