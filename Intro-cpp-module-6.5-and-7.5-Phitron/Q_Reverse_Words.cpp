#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string a;
    int j=0;
    while(ss>>a)
    {
        if(j>0)cout<<" ";
        for(int i=a.size()-1;i>=0;i--) cout<<a[i];
        j++;
    }

    return 0;
}