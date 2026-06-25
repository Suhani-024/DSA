#include <iostream>
#include <algorithm>
using namespace std;

int sumk(int arr[], int n, int k)
{

    long long sum = 0;
    int maxs = 0;
    int i = 0;
    int j = 0;

    while (j < n)
    {

        sum = sum + arr[j];
        if (sum < k)
        {
            j++;   
        }

       else if (sum == k)
        {

            maxs = max(maxs, j - i + 1);
            j++;
        }

       else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - arr[i];
                i++;
            }
            j++;
        }
    }

    return maxs;
}

int main()
{
    int n;
    cout << "enter the no of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter the sum" << endl;
    cin >> k;

    cout << sumk(arr, n, k) << endl;

    return 0;
}