#include<iostream>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    return  num*fact(num-1);

}
int main(){
    int num;
    cout<<"enter the number"<< endl;
    cin>>num;
    cout<<fact(num)<<endl;

    return 0;
}