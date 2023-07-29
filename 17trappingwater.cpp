#include <iostream>

using namespace std;


int water(int arr[], int);

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<< i << " : ";
        cin >> arr[i];
    }
    cout << endl << "Water Trapped: " << water(arr, n)<<" units.";
    return 0;
}

int water(int arr[], int n)
{
    int water = 0;
    int leftmax[n];
    int rightmax[n];
    
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
       
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
        leftmax[i] = max1;
    }

    int max2 = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] > max2)
        {
            max2 = arr[i];
        }
        rightmax[i] = max2;
    }

    for (int i = 1; i < n-1; i++)
    {
        water += min(leftmax[i], rightmax[i]) - arr[i];
    }

    return water;
}