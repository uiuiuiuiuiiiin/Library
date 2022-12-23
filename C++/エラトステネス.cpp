#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;

vb Eratosthenes(ll n){
    vb prime(n+1,true);
    prime[0]=prime[1]=false;

    for(ll i=2;i+i<=n;i++){
        if(!prime[i])continue;
        for(ll j=i*2;j<=n;j+=i){
            prime[j]=false;
        }
    }
    return prime;
}