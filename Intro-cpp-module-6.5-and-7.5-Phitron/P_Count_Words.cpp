#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    ll c=0;
    for(int i=1;i<s.size();i++)
    {
        if(!(s[i]>='A' && s[i]<='z') && s[i+1]>='A' && s[i+1]<='z') c++;
        else continue;
    }
    cout<<c+1<<endl;
    return 0;
}