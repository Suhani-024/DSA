#include <iostream>
using namespace std;

int maxsum(int arr[],int n,int k){
    int sum=0;
    int max=0;
    int j=0;
    int i=0;

    while(j<n){
        sum=sum+arr[j];

        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(max<sum){
                max=sum;}
                
                sum=sum-arr[i];
                i++;
                j++;
        }

    }
    return max;
    //return max/k;(for maxavg)
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
    int k;
    cout<<"enter the window size "<< endl;
    cin>>k;
    
    cout<<maxsum(arr,n,k)<<endl;

    return 0;
}