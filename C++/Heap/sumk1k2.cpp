#include <iostream>
#include <queue>
using namespace std;


int kthSmallest(int arr[], int n, int k) {
    priority_queue<int> maxh;

    for(int i = 0; i < n; i++) {
        maxh.push(arr[i]);
        if(maxh.size() > k) {
            maxh.pop();
        }
    }
    return maxh.top();
}

int main() {
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k1, k2;
    cout << "enter k1 and k2" << endl;
    cin >> k1 >> k2;

    int first  = kthSmallest(arr, n, k1);
    int second = kthSmallest(arr, n, k2);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first && arr[i] < second) {
            sum += arr[i];
        }
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
