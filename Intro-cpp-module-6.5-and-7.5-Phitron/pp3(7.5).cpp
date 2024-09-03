#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    string n;
    cin>>n;
    stringstream ss(s);
    string a;
    ll  c=0;
    while(ss>>a)
    {
        if(a==n)c++;
    }
    cout<<c<<endl;

    return 0;
}