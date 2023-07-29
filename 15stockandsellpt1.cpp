#include <iostream>

using namespace std;


int maxprofit(int arr[], int, int);

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
    cout << endl << "Maximum Profit is: " << maxprofit(arr, 0, n-1);
    return 0;
}

int maxprofit(int arr[], int start, int end)
{
    if (end <= start)
    {
        return 0;
    }

    int profit = 0;

    for (int i = start; i < end; i++)
    {
        for(int j = i+1; j <= end; j++)
        {
            if (arr[j]>arr[i])
            {
                int curr_profit = (arr[j] - arr[i]) + maxprofit(arr, start, i-1) + maxprofit(arr, j+1, end);
                profit = max(profit, curr_profit);
            }
        }
    }

    return profit;
}