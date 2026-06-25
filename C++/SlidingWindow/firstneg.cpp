#include <iostream>
#include <list>
#include <vector>
using namespace std;

vector<int> firstneg(int arr[],int n, int k){
    int i=0;
    int j=0;
    list<int> l;
    vector<int> v;

    while(j<n){
        if(arr[j]<0){
            l.push_back(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(l.size()==0){
                v.push_back(0);
            }
            else{
                v.push_back(l.front());
            }
            if(arr[i]==l.front()){
                l.pop_front();
            }
            i++;
            j++;
        }


    }
    return v;
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
    vector <int> ans=firstneg(arr,n,k);
    for(int x : ans){
        cout <<x<<endl;
    }

    return 0;
}