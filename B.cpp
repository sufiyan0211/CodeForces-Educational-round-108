#include<bits/stdc++.h> 
using namespace std; 
using namespace std::chrono;
 
#ifdef LOCAL
	 #define eprintf(...) fprintf(stderr, __VA_ARGS__);fflush(stderr);
#else
	 #define eprintf(...) 42
#endif


using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;

template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vull = vector<ull>;
using vstr = vector<string>;

using viovi = vector<vector<int>>;
using vllovll = vector<vector<ll>>;
using vullovull = vector<vector<ull>>;
using vstrovstr = vector<vector<string>>;



mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	 return (ull)rng() % B;
}


#define endl "\n"
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define debug(x) cout << #x << ':' << x << endl
#define debugArr(A)       \
		cout << #A << ':';    \
		for (auto x : A)      \
				cout << x << ' '; \
		cout << endl
#define debugPairArr(A)       \
		cout << #A << ':';    \
		for (auto x : A)      \
				cout<<' ' << x.first << ' '<<x.second<<' '; \
		cout << endl
 
clock_t startTime;
double getCurrentTime() {
	 return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
// ----------------------------DEFINE GLOBAL VAR ---------------------------- //



// ---------------------------- START CODE ---------------------------- //

void solve()
{
	ll n,m,k; cin >> n >> m >> k;

	vector<vector<int>> grid(n,vector<int> (m,0));

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i == 0 && j == 0) continue;
			else if(i == 0) grid[i][j] = j;
			else if(j == 0) grid[i][j] = i;
			else grid[i][j] = grid[i-1][j] + (j+1);
		}
	}

	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<m;j++)
	// 	{
	// 		cout << grid[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	k == grid[n-1][m-1] ? cout << "YES\n" : cout << "NO\n";
}

// ---------------------------- END CODE ---------------------------- //

int main() 
{ 
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);

	 #ifndef ONLINE_JUDGE 
	 freopen("input.txt", "r", stdin); 
	 freopen("output.txt", "w", stdout); 
	 freopen("error.txt", "w", stderr);
	 #endif 

	 ll t; cin >> t;
	 while(t--)
	 {
			solve();
	 }


	 #ifndef ONLINE_JUDGE
	 cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	 #endif

	 return 0; 
} 

