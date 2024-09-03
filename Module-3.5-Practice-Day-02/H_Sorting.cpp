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
    sort(ar,ar+n);
    for (int i = 0; i < n; i++)
        cout<< ar[i]<<" ";
        cout<<endl;
    return 0;
}