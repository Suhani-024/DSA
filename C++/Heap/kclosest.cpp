#include <iostream>
#include <queue>
#include <utility>
#include <cmath>

using namespace std;

void closest(int arr[], int n, int k, int x) {

    
    priority_queue<pair<int,int>> maxh;

    for(int i = 0; i < n; i++) {
        maxh.push({abs(arr[i] - x), arr[i]}); 

        if(maxh.size() > k) {
            maxh.pop();   
        }
    }

    
    while(!maxh.empty()) {
        cout << maxh.top().second << endl;
        maxh.pop();
    }
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

    int k;
    cout << "enter k" << endl;
    cin >> k;

    int x;
    cout << "enter the number to be closest" << endl;
    cin >> x;

    closest(arr, n, k, x);

    return 0;
}
