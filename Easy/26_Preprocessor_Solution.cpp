/* Enter your macros here */

#include <string>
#include <climits>
#define toStr(x) #x
#define io cin>>
#define FUNCTION(fname,op) void fname(int &x,int y) {x=((x)op(y)?(x):(y)); }
#define INF INT_MAX
#define foreach(arr,index) for(long unsigned int index=0;index<arr.size();++index)

