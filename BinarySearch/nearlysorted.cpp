#include <iostream>
using namespace std;

int nearly(int arr[],int n, int k){

    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(k==arr[mid]){
            return mid;
        }
        else if(mid-1>=start && arr[mid-1]==k){
            return mid-1;
        }
        else if(mid+1<=end && arr[mid+1]==k){
            return mid+1;
        }
        else if(k<arr[mid]){
            end=mid-2;
        }
        else if(k>arr[mid]){
            start=mid+2;
        }
    }
    return -1;
}



int main() {
    
    int n;
    cout << "enter th size of array" << endl;
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

    cout<<nearly(arr,n,k)<<endl;

    return 0;

}