#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Student
{
    public:
    string s;
    int roll;
    float mark;
};

int main()
{
    int n;
    cin >> n;
    Student *s = new Student[n];

    for (int i = 0; i < n; i++)
        cin >> s[i].s>>s[i].roll>>s[i].mark;

    // ------------------------>One Way<--------------------------
    // for (int i = n-1; i >=0; i--)
    //     cout<<s[i].s<<" "<<s[i].roll<<" "<<s[i].mark<<endl;

    // ------------------------>Two Pointer<----------------------
    int l=0,r=n-1;
    while(l<r)
    {
        swap(s[l],s[r]);
        l++;
        r--;
    }
    for (int i = 0; i <n; i++)
        cout<<s[i].s<<" "<<s[i].roll<<" "<<s[i].mark<<endl;

    return 0;
}