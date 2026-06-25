#include<iostream>
using namespace std;

bool linear(int arr[],int key, int n ){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
    

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

    cout<< linear(arr,key,n)<<endl;


    return 0;
}