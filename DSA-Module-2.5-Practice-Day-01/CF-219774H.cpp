#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++) cin >> ar[i];
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j]) swap(ar[i],ar[j]);
        }
    }
    for (int i = 0; i < n; i++) cout << ar[i]<<" ";
    cout<<endl;

    return 0;
}