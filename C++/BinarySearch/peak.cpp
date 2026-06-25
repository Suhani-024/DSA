#include <iostream>
using namespace std;

int peakElement(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // if next element is greater,
        // peak lies on right side
        if (arr[mid] < arr[mid + 1])           
           start = mid + 1;
        else
            end = mid;
    }

    return start;   // index of a peak element
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter array:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Peak index = " << peakElement(arr, n);

    return 0;
}
