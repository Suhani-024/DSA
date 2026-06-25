#include <iostream>
using namespace std;


int rotated(int arr[],int n){

    int start=0;
    int end=n-1;
    while(start<=end){

        if (arr[start] <= arr[end]) {
            return start;
        }

        int mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return mid;
        }
        else if(arr[start]<=arr[mid]){
            start=mid+1;
        }
        else if(arr[end]>=arr[mid]){
            end=mid-1;
        }
    }
    
    return -1;
}

int main(){
    int n;
    cout << "enter th size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<rotated(arr,n)<<endl;

    return 0;
}