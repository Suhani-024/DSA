#include<iostream>
using namespace std;

int duplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){    //for unique elements
            arr[i+1]=arr[j];
            i++;
        }
      
    }
    return i+1;
}

int main(){
    int n;
    cout << "enter the no of elements" << endl;
    cin >> n;
     int arr[n];
     cout << "enter the array"<< endl; 
     for(int i=0;i<n;i++){
        cin >> arr[i];
     } 

     int newLength = duplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
            }
        }            