#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;


bool poweroftwo(int n){
    for(int i=0;i<=30;i++){     //for power of three limit will be 19;
        int ans=(int)pow(2,i);  //for power of 4 limit will be 15;
        if(ans==n){
            return 1;
        }
       
        // if(ans<INT_MAX/2){
        //     ans=ans*2;
        // }
    }
    return 0;

    
}

int main(){
int n;
cout<<"Enter the number"<< endl;
cin>>n;
int ans=poweroftwo(n);
cout<<ans<<endl;

    return 0;
}