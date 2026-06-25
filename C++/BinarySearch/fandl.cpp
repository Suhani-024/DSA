#include <iostream>
using namespace std;

int first(int arr[], int n, int k)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int last(int arr[], int n, int k)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter the element to be found" << endl;
    cin >> k;

    cout << first(arr, n, k) << endl;
    cout << last(arr, n, k) << endl;

    return 0;
}