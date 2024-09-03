#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll ar[n],odd =0,even=0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i]%2==0) even++;
            else odd ++;
        }
        if(n%2==1)cout<<-1<<endl;
        else 
        {
            if(odd ==n || even ==n) cout<<max(even,odd)/2<<endl;
            else cout<<min(labs(even-n/2),labs(odd-n/2))<<endl;
        }
    }

    return 0;
}