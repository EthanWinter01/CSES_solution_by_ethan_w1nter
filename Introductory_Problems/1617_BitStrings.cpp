/*
CONTEST:    CSES Problem Set
TASK:       1617:   Bit Strings
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 20/05/2023
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9+7;
ll power(ll x, ll y, ll p){
    ll result = 1;
    x %= p;
    while (y){
        if (y & 1)
            result = (result * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return result;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << power(2, n, mod);
    return 0;
}