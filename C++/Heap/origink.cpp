#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void origin(vector<vector<int>> arr, int n, int k)
{
    priority_queue<pair<int, pair<int, int>>> maxh;

    for (int i = 0; i < n; i++)
    {

        int x = arr[i][0];
        int y = arr[i][1];

        int dist = x * x + y * y;

        maxh.push({dist, {x, y}});

        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }

    while (maxh.size() > 0)
    {
        pair<int, int> p = maxh.top().second;
        cout << p.first << "" << p.second;
        maxh.pop();
    }
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    int k;
    cout << "enter k" << endl;
    cin >> k;

    origin(arr, n, k);

    return 0;
}