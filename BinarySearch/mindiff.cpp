#include <iostream>
#include<cmath>
using namespace std;

int min(int arr[],int n,int k){

    int start=0;
    int end=n-1;
    while(start<=end){

        int mid=start+(end-start)/2;
        if(arr[mid]==k){
            return arr[mid];
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        } 
    }
     if (abs(arr[start] - k) < abs(arr[end] - k))
        return arr[start];

    else
        return arr[end];
    
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
    int k;
    cout << "enter the element to be found" << endl;
    cin >> k;

    cout<<min(arr,n,k)<<endl;


    return 0;
}