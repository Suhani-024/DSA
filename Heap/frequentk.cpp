#include <iostream>
#include <queue>
#include <utility>
#include <map>

using namespace std;

void frequent(int arr[], int n, int k) {

    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;

    map<int,int> mp;

    // frequency count
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // min-heap of size k
    for(auto i = mp.begin(); i != mp.end(); i++) {
        minh.push({i->second, i->first});

        if(minh.size() > k) {
            minh.pop();
        }
    }
    // print k most frequent elements
    cout << "Most frequent elements: ";
    while(!minh.empty()) {
        cout << minh.top().second << " ";
        minh.pop();
    }
    cout << endl;
   //for freq sorting
    // while(maxh.size()>0){
    //     int freq=maxh.top().first();
    //     int ele=maxh.top().second();

    //     for(int i=1;i<=freq;i++){
    //         cout<<arr[i];
    //         mxh.pop();
    //     }
    // }
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

    frequent(arr, n, k);

    return 0;
}
