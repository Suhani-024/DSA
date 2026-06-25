#include<iostream>
#include<algorithm>
using namespace std;

// bool ispalin(int n) {
//     int num = n;
//     int rev = 0;

//     while (n != 0) {
//         int digit = n % 10;
//         rev = rev * 10 + digit;
//         n = n / 10;
//     }

//     return (num == rev);
// }

bool ispalin(string &s,int i,int j){
    
    if(i>=j)
        return true;
    
    if(s[i]!=s[j])
        return false;
    
    else
        return ispalin(s,i+1,j-1);
    


}

int main(){
    string n;
    cout<<"Enter the string"<< endl;
    cin>>n;
    if(ispalin(n,0,n.length()-1))
    cout<<"it is palin"<<endl;
    else
    cout<<"it is not palin"<<endl;
    return 0;

}