#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> maxsub(int arr[],int n,int k){

    vector<int> ans;
    deque<int> dq;

    int i=0;
    int j=0;

    while (j<n){

        while(!dq.empty() && dq.back()<arr[j] ){
            dq.pop_back();
        }
        dq.push_back(arr[j]);

        if(j-i+1<k){
            j++;
        }
        if(j-i+1==k){

            ans.push_back(dq.front());

            if(dq.front()==arr[i]){
                dq.pop_front();
            }
            i++;
            j++;
        }

    }
    return ans;
    
    


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

    vector <int> ans=maxsub(arr,n,k);
    for(int x : ans){
        cout <<x<<endl;
    }

    return 0;
}
