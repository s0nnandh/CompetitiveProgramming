#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
using namespace std;
//#define dbg(x) cout<<#x<<" = "<<x<<" "
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
#define pc(x) __builtin_popcount(x)
void DBG() {
	cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
    //cerr << '[' << endl;
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) cerr << "[ ]" << endl
#endif

#define pi pair<int,int>
#define pb push_back
int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    map<int,int> mp;
    rep(i,0,n){
        cin >> a[i];
        //mp[a[i]] = i+1;
    }
    b = a;
    sort(a.begin(),a.end());
    rep(i,0,n){
        mp[a[i]] = i +1;
    }
    cout << n << endl;
    rep(i,0,n)cout << mp[b[i]] << " ";
}