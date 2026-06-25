#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int ropes(int arr[],int n){

    priority_queue<int ,vector<int>,greater<int>> minh;
    int cost=0;
    for(int i = 0; i < n; i++){
        minh.push(arr[i]);
    }

    while(minh.size()>=2){
        int first=minh.top();
        minh.pop();
        int second=minh.top();
        minh.pop();

        cost=cost+first+second;
        minh.push(first+second);

    }
    return cost;
    

    
}

int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<< ropes(arr,n)<<endl;


    return 0;
}