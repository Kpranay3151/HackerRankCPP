#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     int n, p, a, b;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    cin>>p;
    p=p-1;
    v.erase(v.begin()+p);
    cin>>a>>b;
    a=a-1;
    b=b-1;
    v.erase(v.begin()+a, v.begin()+b);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    return 0;
}
