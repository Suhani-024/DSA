#include<iostream>
#include <climits>
using namespace std;

void leftrotate(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
   

}


int main(){

    int n;
    cout <<"enter the size of array" << endl;
    cin>>n;
    int arr[n];
    cout<< "enter the array" << endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
   leftrotate(arr, n);

    cout << "the rotated array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    

    return 0;
}