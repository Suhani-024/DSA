#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> right(vector<int>& arr,int n){
    vector<int> v;
    stack<int> s;

    for(int i=n-1;i>=0;i--){

        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i] ){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());  
    return v;
}

int main(){

    int n;
    cout<<"eneter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     vector<int> ans = right(arr,n);

    for(int x: ans)
        cout<<x<<" ";

    return 0;
}