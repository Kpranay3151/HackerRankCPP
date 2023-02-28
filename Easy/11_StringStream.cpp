#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function 
    stringstream s(str);
    char ch;
    int t;
    vector<int> m;
    while(s>>t)
    {
        m.push_back(t);
        s>>ch;
    }
    return m;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
