#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define INF 2e18
#define inf 0x3f3f3f3f
#define PI acos(-1.0)
#define ULL unsigned long long
#define ff first
#define ss second
#define mk make_pair
#define pb push_back
#define pii pair<int,int>
#define pLL pair<LL, LL>
#define vi vector <int>
#define vL vector<LL>
#define all(a) a.begin(), a.end()
#define Unique(a) a.sort(), a.erase(all(a), a.end())
#define Iterator(a) __typeof(a)
#define FOR(a, it) for(Iterator(a) it = a.begin(); it != a.end();it++)
#define For(i, a, b) for(int i=a;i<b;i++)
#define Rep(i, a) for(int i=0;i<a;i++)
#define rFor(i, a, b) for(int i=a;i>=b;i--)

const LL MOD = 1e9 + 7;

LL BigMod(LL A, LL B, LL M = MOD){LL R = 1;while(B){if(B & 1) R = (R * A) % MOD;A = (A * A) % MOD;B = B >> 1;}return R;}
LL InvMod(LL A, LL M = MOD){return BigMod(A, M - 2);}
LL GCD(LL A, LL B){A = fabs(A);B = fabs(B);if(A == 0) return B;if(B == 0) return A;return GCD(B, A % B);}
LL LCM(LL A, LL B){LL gcd = GCD(A, B);if(1. * A * B / (1. * gcd) > (double)INF) return INF;return (A / gcd) * B;}



//#define Sieve
#ifdef Sieve
const int N = 2000006;bool np[N + 10];vi prime;int prime_size;void sieve(){np[0] = np[1] = true;prime.pb(2);for(int i=4;i<N;i+=2) np[i] = true;for(LL i=3;i<N;i+=2){if(!np[i]){prime.pb(i);for(LL j=i*i;j<N;j+=(i<<1)) np[j] = true;}}prime_size = prime.size();}
#endif


const int N = 2000006;

int n, m, sm;
int dp[444][444];


int ans_me(int rem, int mv)
{
    if(rem == 1) return 0;
    if(rem == 0) return 1;
    int &ret = dp[rem][mv];
    if(ret != -1) return ret;
    ret = 0;
    for(int i=2;i<=rem;i++) ret = (ret + ans_me(rem - i, mv + 1) ) % 100;
    return ret;
}


int main()
{
    scanf("%d %d", &n, &m);
    sm = n + m;
    memset(dp, -1, sizeof(dp));
    int ans = ans_me(sm, 0);
    printf("%d\n", ans);
    return 0;
}
