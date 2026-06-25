#include <iostream>
#include <map>
using namespace std;

int unique(string str, int k){
    int i=0; int j=0; 
int maxs=0;
int n=str.length();
map<char,int> mp;

while(j<n){
    mp[str[j]]++;
    if(mp.size()<k){
        j++;
    }

    else if(mp.size()==k){
        maxs=max(maxs,j-i+1);
        j++;
    }

    else if(mp.size()>k){
        while(mp.size()>k){
            mp[str[i]]--;
            if(mp[str[i]]==0){
                mp.erase(str[i]);
            }
            i++;
            
        }
        j++;
    }
}
return maxs;


}

int main(){
     int n;
    cout << "enter the no of elements" << endl;
    cin >> n;
     string str;
     cout << "enter the string"<< endl; 
     cin>>str; 
    int k;
    cout<<"enter the k"<< endl;
    cin>>k;

    cout<<unique(str,k)<<endl;

    return 0;
}