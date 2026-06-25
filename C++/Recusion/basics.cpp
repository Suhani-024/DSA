#include <iostream>
using namespace std;


int fact(int n){
    if(n<=1){
        return n;
    }
    int ans=n*fact(n-1);
    return ans;
}

int fibo(int n){
    if(n<=1){
        return n;
    }
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);

    return ans1+ans2;
}

int palin(string str,int i,int j){
    

            if(i>=j){
                return 1;
            }

            if(str[i]!=str[j]){
                return -1;
            }
            return palin(str,i+1,j-1);
        
    
}
int main(){
    int n;
    
    cin>>n;
    return 0;
}