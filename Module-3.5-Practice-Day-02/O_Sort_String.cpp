#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin >> n;
    char s;
    int ch[26]={0};
    for(ll i=0;i<n;i++)
    {
        cin>>s;
        ch[s-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(ch[i]>0)
        {
            for(int j=0;j<ch[i];j++)
            {
                char c= 'a'+i;
                cout<<c;
            }
        }
    }
    return 0;
}