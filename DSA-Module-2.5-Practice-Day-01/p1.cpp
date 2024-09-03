#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int * get_array(int n)
{
    int *a = new int[n];
    for(int i=0;i<n;i++) cin>>a[i];
    return a;    
}


int main() {
    int n;
    cin >> n;
    int *a = get_array(n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    delete[]a;
    return 0;
}