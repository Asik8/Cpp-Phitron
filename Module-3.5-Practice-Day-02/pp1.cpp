#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Student
{
    public:
	string name;
	int roll;
	string section;
	float math_marks;
	int cls;
    Student(string n,int r,string sec,float math,int c)
    {
        name = n;
        roll = r;
        section = sec;
        math_marks = math;
        cls = c;
    }
};

int main() {
    Student p1("Mim",20,"L",500.56,13);
    Student p2("Maruf",5730,"O",99,13);
    Student p3("Jiu",25,"A",100.00,13);
    if(p1.math_marks>p2.math_marks && p1.math_marks>p3.math_marks)
        cout<<p1.name<<endl;
    else if(p1.math_marks<p2.math_marks && p2.math_marks>p3.math_marks)
        cout<<p2.name<<endl;
    else if(p1.math_marks<p3.math_marks && p3.math_marks>p2.math_marks)
        cout<<p3.name<<endl;
    else cout<<p1.name<<endl;
    return 0;
}