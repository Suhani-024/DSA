#include<iostream>
using namespace std;
int min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"enter size of array"<< endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<< endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    cout<<min(arr,n)<<endl;
    return 0;
}