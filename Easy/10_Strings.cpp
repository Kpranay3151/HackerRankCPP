#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string x=a+b;
    cout<<x<<endl;
    char s, t;
    t=a[0];
    s=b[0];
    a[0]=s;
    b[0]=t;
    cout<<a+" "+b;
    return 0;
}
