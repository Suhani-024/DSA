#include <iostream>
using namespace std;

int infinite(int arr[],int n,int key){

    int start=0;
    int end=1;

    while(key>=arr[end]){

        start=end;
        end=end*2;
    }
    return binary(arr,start,end,key);
}
int binary(int arr[],int start,int end,int key){
    
    while(start<=end){
            int mid=start+(end-start)/2;

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

    cout<<infinite(arr,n, k)<<endl;

    return 0;
}