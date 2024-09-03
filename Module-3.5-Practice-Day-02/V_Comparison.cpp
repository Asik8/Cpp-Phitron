#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='>')
    {
        if(a>b) cout<<"Right\n";
        else cout<<"Wrong\n";
    }
    else if(c=='<')
    {
        if(a<b) cout<<"Right\n";
        else cout<<"Wrong\n";
    }
    else if(c=='=')
    {
        if(a==b) cout<<"Right\n";
        else cout<<"Wrong\n";
    }

    return 0;
}