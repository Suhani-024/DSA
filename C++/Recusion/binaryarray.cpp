#include <iostream>
using namespace std;

void reverse(int arr[], int i,int n ){
    

    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);

    reverse(arr,i+1,n);




    
}

int binary(int arr[],int s,int e,int k){
    int mid=(s+e)/2;

    if(arr[mid]==k){
        return 1;
    }
    if(s>e){
        return -1;
    }
    else if(arr[mid]<k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}


int main(){
    
    return 0;
}