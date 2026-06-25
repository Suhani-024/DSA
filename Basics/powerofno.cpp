#include<iostream>
using namespace std;
int power(int num1,int num2){
    if(num2==0)
    return 1;
    else
    return num1*power(num1,num2-1);
}

int main(){
    int num1,num2;
    cout<<"enter the number 1"<< endl;
    cout<<"enter the number 2"<< endl;
    cin>>num1>>num2;
    int ans=power(num1,num2);
    cout<<ans<< endl;




    return 0;
}