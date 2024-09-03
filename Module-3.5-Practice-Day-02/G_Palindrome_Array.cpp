#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    bool found = false;
    int l=0,r=n-1;
    while(l<r)
    {
        if(ar[l] == ar[r])
        {
            l++;
            r--;
        }
        else
        {
            found = true;
            break;
        }
    }
    if (found) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}