/* You miss 100 percent of the shots you don't take */

#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<"["<<#x<<": "<<x<<"]"<<endl
#define debug2(x, y) cout<<"["<<#x<<": "<<x<<", "<<#y<<": "<<y<<"]"<<endl

#define int long long
#define ll long long
#define ld long double

#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define si set<int>
#define usi unordered_set<int>

#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define mp make_pair

#define f(i, a, b) for(int i=a;i<b;i++)
#define fr(i, a, b) for(int i=a;i>=b;i--)
#define pb emplace_back
#define sumv(a) accumulate(all(a),0)

/*returns the index of the next smallest number just
greater than or equal to that number. */
#define lb lower_bound

/*It returns an iterator pointing to the first element
just greater than the value*/
#define ub upper_bound

const int MOD = 1000000007;
const int PI = 3.14159265358979;
const int INF = 1000000000000000000;


/* Graph Algorithms Start */

// const int dx[4] = {-1, 0, 0, 1};
// const int dy[4] = {0, -1, 1, 0};

// char a[1005][1005];
// int n, m;
// bool isValid(int x,int y){
//    if(x<0 || y<0 || y>m-1 || x>n-1){
//        return 0;
//    }
//    return 1;
// }

// //adjacency list
// vi adj[100005];

// /*
// vis = visited
// dis = distance from source
// par = parent
// */
// int vis[100005], dis[100005], par[100005];

// // number of nodes
// int n;

// void bfs(int src) {
//     queue<int> q;
//     q.push(src);
//     vis[src] = 1;
//     par[src] = -1;
//     while (!q.empty()) {
//         int curr = q.front();
//         q.pop();
//         for (int child : adj[curr]) {
//             if (!vis[child]) {
//                 vis[child] = 1;
//                 q.push(child);
//                 dis[child] = dis[curr] + 1;
//                 par[child] = curr;
//             }
//         }
//     }
// }

// void printPathBfs(int src, int dest)
// {
//     if(!vis[dest])
//     {
//         cout<<"No Path\n";
//     }
//     else
//     {
//         vi path;
//     for (int v = dest; v != -1; v = par[v])
//         path.pb(v);
//     reverse(all(path));
//     cout << "Path: ";
//     for (int v : path)
//         cout << v << "->";
//     }
//     cout<<endl;
// }

// // adjacency list
// vi adj[200005];

// //vis = visited
// int vis[200005], subTreeSize[200005], level[200005];

// // number of nodes
// int n;

// int dfs(int node, int currLev)
// {
//     vis[node] = 1;
//     level[node] = currLev;
//     int curr = 1;
//     for (auto child : adj[node])
//     {
//         if (!vis[child])
//         {
//             curr += dfs(child, currLev + 1);
//         }
//     }

//     subTreeSize[node] = curr;
//     return curr;
// }

/* Graph Algorithms End */


/* Knapsack ("Han thik hai nahi rhta code yad!") */

// int dp[1005][1005];
// int wt[1005], val[1005];

// int knapsackDp(int w, int n)
// {
//     int dp[n+1][w+1];
//     f(i, 0, n+1)
//     {
//         f(j, 0, w+1)
//         {
//             if(!i || !j)
//             {
//                 dp[i][j] = 0;
//             }

//             else if(wt[i-1] <= j)
//             {
//                 dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
//             }
//             else dp[i][j] = dp[i-1][j];
//         }
//     }

//     return dp[n][w];
// }

/* Knapsack */

/* Mathematics */
// vector<bool> prime(100005, 1);
// void SieveOfEratosthenes(int n)
// {
//     f(p, 2, sqrt(n) + 1) {
//         if (prime[p] == 1) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = 0;
//         }
//     }
// }

bool sortbysec(pii a, pii b) {
    return (a.ss < b.ss);
}

// const int N = 1000001;

// int factorialNumInverse[N + 1];

// int naturalNumInverse[N + 1];

// int fact[N + 1];
// void InverseofNumber(int p)
// {
//     naturalNumInverse[0] = naturalNumInverse[1] = 1;
//     for (int i = 2; i <= N; i++)
//         naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
// }

// void InverseofFactorial(int p)
// {
//     factorialNumInverse[0] = factorialNumInverse[1] = 1;

//     for (int i = 2; i <= N; i++)
//         factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
// }

// void factorial(int p)
// {
//     fact[0] = 1;

//     for (int i = 1; i <= N; i++) {
//         fact[i] = (fact[i - 1] * i) % p;
//     }
// }


int powerMod(int a, int b, int M) {
    int res = 1;
    a = a % M;
    while (b) {
        if (b % 2)
            res = (res * a) % M;
        b /= 2;
        a = (a * a) % M;
    }
    return res;
}

int power(int a, int b) {
    int res = 1;
    while (b) {
        if (b % 2)
            res = (res * a);
        b /= 2;
        a = (a * a);
    }
    return res;
}

int modInverse(int n, int M)
{
    return powerMod(n, M - 2, M);
}

int nCrModPFermat(int n, int r, int M)
{

    if (!r)
        return 1;

    int fac[n + 1];
    fac[0] = 1;
    f(i, 1, n + 1)
    {
        fac[i] = fac[i - 1] * i % M;
    }

    return (fac[n] * modInverse(fac[r], M) % M *
            modInverse(fac[n - r], M) % M) %
           M;
}

ld logABaseB(int a, int b)
{
    return (ld)((ld)log(a) / (ld)log(b));
}

/* Mathematics */



int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(15);
    int t = 1;
    cin >> t;
    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;
        int cnt = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            cnt *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            cnt *= 2;
        }
        if (cnt >= n) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
/* Author: sagar_adval */

 