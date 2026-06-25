#include<iostream>
using namespace std;

int sumdigit(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;

}

int main(){
int n;
cout<<"enter the number"<< endl;
cin>>n;
cout<<sumdigit(n)<< endl;
    return 0;
}