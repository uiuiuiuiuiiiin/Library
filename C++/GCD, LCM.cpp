#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 最大公約数
ll gcd(ll A, ll B){
    if(B==0)return A;
    return gcd(B,A%B);
}

// 最小公倍数
ll lcm(ll A, ll B){
    return A / gcd(A, B) * B;
}