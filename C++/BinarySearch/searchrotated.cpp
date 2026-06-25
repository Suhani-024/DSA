#include <iostream>
using namespace std;

int binary(int arr[],int start,int end,int i){
    
    while(start<=end){
            int mid=start+(end-start)/2;

        if(arr[mid]==i)
            return mid;
        
        if(i>arr[mid])
            start=mid+1;
            
        
        else
            end=mid-1;
            
    }

    return -1;
}

int rotated(int arr[],int n){

    int start=0;
    int end=n-1;
    while(start<=end){

        if (arr[start] <= arr[end]) {
            return start;
        }

        int mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;

        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return mid;
        }
        else if(arr[start]<=arr[mid]){
            start=mid+1;
        }
        else if(arr[mid]<=arr[end]){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "enter th size of array" << endl;
    cin >> n;

    int i;
    cout << "enter element to search\n";
    cin >> i;
    
    int arr[n];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minI=rotated(arr,n);

    int ans;
    if(i>=arr[minI] && i<=arr[n-1]){
        ans=binary(arr,minI,n-1,i);
    }
    else{
        ans=binary(arr,0,minI-1,i);
    }

        cout<<ans<<endl;
    return 0;
}