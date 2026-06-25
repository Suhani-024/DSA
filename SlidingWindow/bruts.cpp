#include <iostream>
using namespace std;

int brute(int arr[],int n,int k){
    //int sum=0;
int max=0; 
    for(int i=0;i<n-k;i++){
        int sum=0;
        for(int j=0;j<i+k;j++){
            sum =sum+arr[j];
        }
        if(sum>max){
                max=sum;
            }
    }
    return max;

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
    
    cout<<brute(arr,n,k)<<endl;

    return 0;
}