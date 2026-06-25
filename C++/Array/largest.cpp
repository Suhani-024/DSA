#include<iostream>
using namespace std;

int maxelement(int arr[], int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

// int main(){
//     int arr[]= {4,6,2,8,6};
//     int n=sizeof(arr) / sizeof(arr[0]);
//     cout << maxelement(arr,n) << endl;
//     return 0;

// }


int main(){
    int n;
    cout << "enter the no of elements" << endl;
    cin >> n;
     int arr[n];
     cout << "enter the array"<< endl; 
     for(int i=0;i<n;i++){
        cin >> arr[i];
     } 

     cout << "largest element is " << maxelement(arr,n) << endl;
     return 0;

    }