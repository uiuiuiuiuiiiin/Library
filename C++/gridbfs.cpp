#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>    //atcoder
//using namespace atcoder;  //atcoder
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
using vd = vector<double>;
using vld = vector<long double>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<long long>>;
using vvc = vector<vector<char>>;
using vvs = vector<vector<string>>;
using vvb = vector<vector<bool>>;
using vvd = vector<vector<double>>;
using vvld = vector<vector<long double>>;
// Graph
using Graph = vector<vector<int>>;
using Nodes = pair<int,int>;
//using pri = priority_queue<ll>;  //最大値
//using pri = priority_queue<ll, vector<ll>, greater<ll>>;   //最小値
#define _GLIBCXX_DEBUG
#define endl "\n"
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(f,x,...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
const int INF = 1e9;
const int MININF = -1e9;
const ll LINF = 1e18;
const ll MINLINF = -1e18;
const int MOD = 1e9+7;
const int MODD = 998244353;

// 4方向
vi vx={0, 1, 0, -1};
vi vy={1, 0, -1, 0};

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
    if(a > b){
        a = b;
        return true;
    }
    return false;
}

// N*Mのグリッド（時宜変える）
// grid_bfs⇒スタートかゴールへの最短距離返す。
// 引数（迷路、sx、sy、gx、gx、壁）
int grid_bfs(vs &maze, int sx, int sy, int gx, int gy, char wall){
    vvi dist(N, vi(M, -1));
    queue<Nodes> que;
    dist[sx][sy] = 0;
    que.push(Nodes(sx, sy));

    while(!que.empty()){
        auto [x,y]=que.front();
        que.pop();

        for(int i=0;i<4;i++){
            int x2=x+vx[i];
            int y2=y+vy[i];

            if(x2<0 || x2>=N || y2<0 || y2>=M || maze[x2][y2]==wall){
                continue;
            }

            if(dist[x2][y2]!=-1){
                continue;
            }

            dist[x2][y2]=dist[x][y]+1;
            que.push(Nodes(x2,y2));
        }
    }
    return dist[gx][gy];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>N>>M;
    vs maze(N);
    rep(i,N){
        cin>>maze[i];
        rep(j,maze[i].size()){
            if(maze[i][j]=='S'){
                sx=i; sy=j;
            }
            if(maze[i][j]=='G'){
                gx=i; gy=j;
            }
        }
    }

    cout<<grid_bfs(vs &maze, sx, sy, gx, gy, wall)<<endl;
}