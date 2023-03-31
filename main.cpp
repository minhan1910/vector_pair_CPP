#include <bits/stdc++.h>

using namespace std;

// FOR-LOOPS
#define range(i,a,b) for (size_t i = (a); i <= (b); ++i)
#define forn(n) for (size_t i = 0; i < (n); ++i)
#define fore(a) for (auto& it : (a))
#define spFore(a) for (const auto& it : (a)) cout << it << ' '
#define endlFore(a) for (const auto& it : (a)) cout << it << "\n"

// FUNCTIONS
#define pb push_back
#define pf pop_front
#define fi first
#define se second
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

// MAGIC STRING
#define endl "\n"
#define space ' '
#define YES "YES"
#define NO "NO"

// FAST I/O
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// TYPES
typedef long long ll;
typedef unsigned long long ull;

// VECTORS
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;

// PAIRS
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;


void test_pair() {
	pair<int, int> p = make_pair(100, 200);
	
	// C++ 11 tro len 
	pair<char, int> c = {'A', 200};
	
//	p.first = 100;
//	p.second = 200;
	
	cout << p.first << ' ' << p.second << endl;	
	cout << c.first << ' ' << c.second << endl;
}

void init_pair_arr() {
	int n; cin >> n;
	pair<int, int> a[n]; // vector<pair<int, int>> v;
	
	for (int i = 0; i < n; ++i)
		cin >> a[i].first >> a[i].second;
	
	for (int i = 0; i < n; ++i)
		cout << a[i].first << ' ' << a[i].second << endl;
}

void Init_Pair_With_Vector() {
	int n; cin >> n;
	vector<pair<int, int>> v(n);
	
	for (int i = 0; i < n; ++i) {
//		pair<int, int> tmp;
//		cin >> tmp.first >> tmp.second;
//		v.push_back(tmp);
		cin >> v[i].first >> v[i].second;
	}
	
	for (const auto& it : v)
		cout << it.first << ' ' << it.second << endl;
}

void Special_Pair() {
	pair<int, pair<int, int>> p;
	p.first = 10;
	p.second.first = 11;
	p.second.second = 12;
	
	pair<int, vector<int>> pv;
	pv.first = 100;
	pv.second.push_back(1);
	pv.second.push_back(2);	
	pv.second.push_back(3);
	
	for (int x : pv.second) {
		cout << x << ' ';
	}
}


int main(int argc, char** argv) {
	op();
	
	int n; cin >> n;
	
	vector<pair<char, int>> v;
	int cnt = 0;
	while(n--) {
		char tmp; cin >> tmp;
		if (v.empty()) {
			++cnt;
			v.pb(pii(tmp, 1));
		} else {
			bool hasFound = false;
			
			range(i,0,v.size() - 1) {
				if (v[i].first == tmp) {
					v[i].second++;
					hasFound = true;
					break;
				} 
			}
			
			if (!hasFound) {
				++cnt;
				v.pb(pii(tmp, 1));
			}
		}
	}
	
	cout << cnt << endl;
	
	range(i,0,v.size() - 1) {
		if (v[i].second != 0) {
			cout << v[i].first << ' ' << v[i].second << endl;
			v[i].second = 0;
		}
	}
	
	return 0;
}
