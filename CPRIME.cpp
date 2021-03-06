#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>

using namespace std;


typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef vector<int> VI;
typedef vector<long> VL;
typedef vector<LL> VLL;
typedef vector<string> VS;
typedef vector<VI> VVI;
typedef pair<int,int> PII;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define REV(i,a,b) for(int i=a-1;i>=b;i--)
#define rev(i,n) REV(i,n,0)
#define TR(i,x) for(typeof(x.begin()) i=x.begin();i!=x.end();i++)
#define GI ({ int x; scanf("%d",&x); x; })
#define GLL ({ LL x; scanf("%lld",&x); x; })
#define ALL(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define PQ priority_queue
#define inf (int)(1e9)
#define linf (LL)(1e18)
#define eps (double)(1e-9)
#define leps (LD)(1e-18)
#define PI (double)(3.141592653589793238)

#define MAX 100000005

bool prime[100000005];
int res[100000005];

void sieve(){
    register int i,j;
    memset(prime,true,sizeof prime);
    prime[0] = prime[1] = false;
    for(i=4;i<=MAX;i+=2)
        prime[i] = false;
    for(i=3;i<=10001;i+=2){
        if(prime[i]){
            for(j=2*i;j<MAX;j+=i)
                prime[j] = false;
        }
    }
    int cnt = 0;
    for(i=0;i<=MAX;i++){
        if(prime[i])
            cnt++;
        res[i] = cnt;
    }
}

int main(){
    int t;
    sieve();
    //
    long x;
    while(1){
        //scanf("%ld",&x);
        cin>>x;
        if(x == 0)
            break;
        double c = (double)x/log(x);
        printf("%.1f\n",(abs(res[x] - c)/res[x])*100);
    }
    return 0;
}

