#include <iostream>

using namespace std;


void reversearr(int arr[], int);

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
    reversearr(arr, n);
    return 0;
}

void reversearr(int arr[], int n)
{
    int temp;
    int low = 0;
    int high = n-1;
    while(low < high)
    {
        temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;
        low++;
        high--;
    }
    for(int i = 0; i < n; i++)
    {
        cout << endl << "The element "<< i <<" is: "<< arr[i];
    }
}