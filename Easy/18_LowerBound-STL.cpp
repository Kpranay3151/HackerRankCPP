#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,query_count,query;
    vector<int> *array_num = new vector<int>;
    vector<int>::iterator lw_it,up_it;
    cin>>size;
    int number;
    for (int i =0; i<size; i++) {
        cin>>number;
        array_num->push_back(number);
    }
    cin>>query_count;
    while (query_count) {
        query_count--;
        cin>>query;
        lw_it = lower_bound(array_num->begin(),array_num->end(),query);
        up_it = upper_bound(array_num->begin(),array_num->end(),query);
        if(*lw_it == query){
            cout<<"Yes "<<(lw_it-array_num->begin()+1)<<endl;
        }else {
            cout<<"No "<<(up_it-array_num->begin()+1)<<endl;
        }
    }
    return 0;
}
