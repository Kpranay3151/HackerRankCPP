#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    
    map<string,int> query_map;
    int type;
    string name;
    int marks;
    
    for(int i = 0; i<q; i++){
        cin >> type;
        
        if(type==1){
            cin >> name;
            cin >> marks;
            query_map[name] += marks;
        }else if(type==2){
            cin >> name;
            query_map[name] = 0;
        }else{
            cin >> name;
            int x = query_map[name];
            cout << x << "\n";
        }
    }
     
    return 0;
}



