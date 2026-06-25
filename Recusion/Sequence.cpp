#include <iostream>
#include <vector>
using namespace std;

//print the sequence
void sequence(int i,vector<int> &ds,int arr[],int n ){
    if(i==n){
        for(auto x : ds) cout << x << " ";
        cout << endl;
        return;
    }
    //pick
    ds.push_back(arr[i]);
    sequence(i+1,ds,arr,n);

    //not pick
    ds.pop_back();
    // int next = i + 1;   when duplicates are involved
    //while(next < n && candidates[next] == candidates[i]) next++;
    sequence(i+1,ds,arr,n);

}

//print the sum divisble by k
void sequence1(int i,vector<int> &ds,int sum,int arr[],int n ,int k){
    if(i==n){
        if(ds.size()!=0  && sum%k==0){
          for(auto x : ds) cout << x << " ";
            cout << endl;
        }
        return;
       
    }
    ds.push_back(arr[i]);
    sum+=arr[i];
    sequence1(i+1,ds,sum,arr,n,k);
    ds.pop_back();
    sum-=arr[i];
    sequence1(i+1,ds,sum,arr,n,k);

}

//to count the sequence

int sequence2(int i,vector<int> ds,int sum,int arr[],int n,int k){

    if(i==n){
        if(sum%k==0){
            return 1;
        }
        return 0;
    }

    ds.push_back(arr[i]);
    sum+=arr[i];
    int l=sequence2(i+1,ds,sum,arr,n,k);
    ds.pop_back();
    sum-=arr[i];
    int r=sequence2(i+1,ds,sum,arr,n,k);
    return l+r;

}

int sumseq(int i,int arr[],int sum,int n){
    if(i==n){
        if(sum==0){
            return 1;
        }
        return 0;
    }

     int left=0;

     int right=0;

    if(arr[i]<=sum){


        sum-=arr[i];
        left=sumseq(i,arr,sum,n);}
        sum+=arr[i];
        right=sumseq(i+1,arr,sum,n);

        return left+right;
    
}





int main(){
    return 0;
}