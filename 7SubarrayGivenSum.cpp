#include <bits/stdc++.h>
using namespace std;

bool subarr(int arr1[], int n, int sum)
{
    int psum = 0;
    unordered_set <int> h;
    for(int i = 0; i < n; i++)
    {
        psum += arr1[i];
        if(h.find(psum - sum) != h.end())
        {
            return true;
        }
        if (psum == sum)
        {
            return true;
        }
        h.insert(psum);
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr1[n];
    cout << endl <<"Input array Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int sum;
    cout << "Enter sum: ";
    cin >> sum;
    cout<< endl <<"Pair with given Sum exists?: " << subarr(arr1, n, sum);
    return 0;
}