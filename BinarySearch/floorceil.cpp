#include <iostream>
using namespace std;

int floor(int arr[],int n, int k){

    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==k){
            return arr[mid];
        }
        else if(arr[mid]<k){
            ans=arr[mid];
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;              //ans=arr[mid] (in case of ceil)

        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter the element to be found" << endl;
    cin >> k;

    cout<<floor(arr,n,k)<<endl;

    return 0;
}