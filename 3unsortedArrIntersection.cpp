#include <bits/stdc++.h>
using namespace std;

void intersect(int arr1[], int arr2[], int m, int n)//TC =  theta(m + n)
{
    unordered_set <int> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(arr2[i]);
    }
    cout<<endl;
    for(int i = 0; i < m; i++)
    {
        if(s.count(arr1[i]))
        {
            cout<<arr1[i]<<" ";
        }
    }

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
    int k;
    cout << "Enter size of array: ";
    cin >> k;
    int arr2[k];
    cout << endl <<"Input array Elements: ";
    for(int i = 0; i < k; i++)
    {
        cin >> arr2[i];
    }
    intersect(arr1, arr2, n, k);
    return 0;
}