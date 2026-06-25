#include<iostream>
using namespace std;

int sorted(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            return 0;
        }
    }
      return 1;
}

int main() {
    int n;
    cout <<"enter the size of array" << endl;
    cin>>n;
    int arr[n];
    cout<< "enter the array" << endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted(arr,n)){
        cout<< "array is sorted" << endl;
    }
    else{
        cout <<"not sorted" << endl;
    }
}