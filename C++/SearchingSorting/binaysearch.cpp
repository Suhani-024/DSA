#include<iostream>
using namespace std;
int binary(int arr[],int n,int key){
    int  start=0;
    int end=n-1;
    while(start<=end){
            int mid=(start+end)/2;

        if(arr[mid]==key)
            return mid;
        
        if(key>arr[mid])
            start=mid+1;
        
        else
            end=mid-1;
    }

    return -1;
}

int main(){
    int n;
    cout<<"enter th size of array" << endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<< endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to be found"<<endl;
    cin>>key;

    cout<<binary(arr,n,key)<<endl;

    return 0;
}