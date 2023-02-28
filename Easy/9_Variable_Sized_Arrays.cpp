#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<int, vector<int>> m;
    int n,q;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        int s;
        cin>>s;
        vector<int> a;
        for(int j=0; j<s; j++){
            int t;
            cin>>t;
            a.push_back(t);
            
        }
        m.insert(pair<int, vector<int>>(i,a));
        a.clear();
    }
    
    for(int i; i<q; i++){
        int a,b;
        cin>>a>>b;
        if(m.find(a)!=m.end()) {
           cout << m[a][b] << endl;
        }
    }
    return 0;
}
