#include <iostream>
using namespace std;

pair<int,int> search2D(int arr[][100], int n, int m, int key) {

    int i = 0;
    int j = m - 1;   

    while(i < n && j >= 0) {

        if(arr[i][j] == key)
            return {i, j};

        else if(arr[i][j] > key)
            j--;        // move left

        else
            i++;        // move down
    }

    return {-1, -1};
}

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    int key;
    cin >> key;

    pair<int,int> ans = search2D(arr, n, m, key);

    if(ans.first == -1)
        cout << "Not Found";
    else
        cout << "Found at: " << ans.first << " " << ans.second;

    return 0;
}
