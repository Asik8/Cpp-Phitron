#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        ll m= LONG_LONG_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ll l = ar[i]+ar[j]+(j+1)-(i+1);
                m = min(m,l);
            }
        }
        cout<<m<<endl;
    }

    return 0;
}