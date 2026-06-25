#include <iostream>
#include<queue>

using namespace std;

int max(int arr[],int n,int k){
    priority_queue<int ,vector<int>,greater<int>> minh;

    for(int i=0;i<n;i++){
        minh.push(arr[i]);
        if(minh.size()>k){
            minh.pop();
            
        }
    }
    return minh.top();

    
}

int min(int arr[],int n,int k){
    priority_queue<int> maxh;

    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
            
        }
    }
    return maxh.top();

    
}

//vector<int> result;    // when we need to exactly return k number of largest or smallest elements.
  //  while(!minh.empty()) {
    //    result.push_back(minh.top());
      //  minh.pop();

int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
     int arr[n];
     cout << "enter the array"<< endl; 
     for(int i=0;i<n;i++){
        cin >> arr[i];
     } 
    int k;
    cout<<"enter the largest/smallest no. "<< endl;
    cin>>k;

    cout<<min(arr,n,k)<<endl;
    cout<<max(arr,n,k)<<endl;

    return 0;
}