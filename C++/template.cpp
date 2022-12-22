#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>    //atcoder用
//using namespace atcoder;  //atcoder用
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<long long>;
using vc = vector<char>;
using vs = vector<string>;
using vb = vector<bool>;
using Graph = vector<vector<int>>;
//using pri = priority_queue<int>;  //最大値
//using pri = priority_queue<int, vector<int>, greater<int>>;   //最小値
#define _GLIBCXX_DEBUG
#define endl "\n"
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(f,x,...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
const int INF = 1e9;
const int MININF = -1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const int MODD = 998244353;

// 4方向
vi vx={0,1,0,-1};
vi vy={1,0,-1,0};


// a<bならaをbに更新
template <class T>
bool chmax(T &a, const T& b){
    if(a<b){
        a=b;
        return true;
    }
    return false;
}

// a>bならaをbに更新
template <typename T>
bool chmin(T &a, const T& b){
    if(a>b){
        a=b;
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
}