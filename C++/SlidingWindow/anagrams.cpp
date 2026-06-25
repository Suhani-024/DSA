#include <iostream>
#include <map>
using namespace std;

int anagrams(string str, int l, string ptr)
{

    int ans = 0;
    int i = 0;
    int j = 0;
    int k = ptr.length();
    map<char, int> mp;

    for (char c : ptr)
    {
        mp[c]++;
    }

    int count = mp.size();

    while (j < l)
    {
        if(mp.find(str[j])!=mp.end()) {   // if a and b both become zero the count will also become 0
        mp[str[j]]--;
        if(mp[str[j]]==0)
        count--;
        }

        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (count == 0){
                ans++;}
                // element removed form the i position now

                if (mp.find(str[i]) != mp.end()) {
                if (mp[str[i]] == 0)
                    count++;
                mp[str[i]]++;
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int l;
    cout << "enter the length of string" << endl;
    cin >> l;
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    string ptr;
    cout << "enter the pattern " << endl;
    cin >> ptr;

    cout<<anagrams(str,l,ptr)<< endl;

    return 0;
}