#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;


void rotated(int arr[],int n, int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

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
    int d;
    cout << "enter the value of d" << endl;
    cin>>d;
    
   rotated(arr,n,d);

    cout << "the rotated array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    

    return 0;
}