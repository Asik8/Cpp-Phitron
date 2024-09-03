#include <bits/stdc++.h>
using namespace std;
#define ll long long int


class Student
{
    public:
    string name;
    int roll;
    float mark;
};

bool cmp(Student a,Student b)
{
    if(a.mark == b.mark)
    {
        if(a.roll < b.roll) return true;
        else return false;
    }
    else if(a.mark>b.mark) return true;
    else return false;
}

int main() {
    int n;
    cin>>n;
    Student *p = new Student[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].name>>p[i].roll>>p[i].mark;
    }

    sort(p,p+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout<<p[i].name<<" "<<p[i].roll<<" "<<p[i].mark<<endl;
    }
    return 0;
}