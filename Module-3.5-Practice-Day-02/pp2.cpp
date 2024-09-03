#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Cricketer
{
    public:
	int jersey_no;
	string country;
};


int main() {
    Cricketer *dhoni = new Cricketer;
    dhoni->country = "India";
    dhoni->jersey_no = 23;

    Cricketer * kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;
    delete dhoni;
    dhoni = nullptr;
    cout<<kohli->jersey_no<<" "<<kohli->country<<endl;
    delete kohli;
    kohli = nullptr;
    return 0;
}

// If i use kohli = dhoni, it won't work as expected because it 
// will make both kohli and dhoni point to the same memory location. When you delete dhoni,
// you'll also be deleting the memory that 
// kohli is pointing to, resulting in undefined behavior when 
// you try to access kohli afterward. To avoid this, you need to copy the data manually as shown in the previous example.