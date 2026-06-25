#include <iostream>
using namespace std;

int asc(int arr[],int start,int end,int k){
    while(start<=end){
        int mid=start+(end-start)/2;

        if(k==arr[mid]){
            return mid;
        }
        else if(k<arr[mid]){
            end=mid-1;
            
        }
        else if(k>arr[mid]){
            start=mid+1;
        }
        return -1;
    }



}
int dec(int arr[],int start,int end,int k){
    while(start<=end){
        int mid=start+(end-start)/2;

        if(k==arr[mid]){
            return mid;
        }
        else if(k>arr[mid]){
            end=mid-1;
            
        }
        else if(k<arr[mid]){
            start=mid+1;
        }
        return -1;
    }


    
}


int peak(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid;
    }

    return start;   
}
    

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"enter the key"<<endl;
    cin>>k;

    int p = peak(arr, n);
    int ans = asc(arr, 0, p, k);

    if(ans == -1)
        ans = dec(arr, p + 1, n - 1, k);

    cout << ans << endl;



    return 0;
}