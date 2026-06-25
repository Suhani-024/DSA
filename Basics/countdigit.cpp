#include<iostream>
using namespace std;

int cont(int n){

    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
    
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<cont(n)<<endl;


    return 0;
}