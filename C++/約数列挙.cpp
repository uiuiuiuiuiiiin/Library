#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<long long>;

// 約数列挙
vl factor(ll X){
    vl ans;
    for(ll i=1;i*i<=X;i++){
        if(X%i!=0){
            continue;
        }
        ans.push_back(i);
        if(i!=X/i){
            ans.push_back(X/i);
        }
    }
    return ans;
}