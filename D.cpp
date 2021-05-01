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
	ll n = 10000000;
	vector<ll> A(n);

	for(ll i=0;i<n;i++) A[i] = 10;
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

