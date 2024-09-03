#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++) cin >> ar[i];
    ll m = ar[0];
    for (int i = 1; i < n; i++) m=max(m,ar[i]);

    cout<<m<<endl;

    return 0;
}