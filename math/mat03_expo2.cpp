/*
task: 1712 - Exponentiation II
date: 05 / 01 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1712
*/

#include <iostream>
const int MODULO = 1e9+7;
long long fastpow(long long x, long long y, long long mod){
    long long z = 1;
    while (y > 0){
        if (y&1) 
            z = (z*x) % mod;
        x = (x*x) % mod;
        y >>= 1;
    }
    return z;
}
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    while (n--){
        long long a,b,c;
        std::cin >> a >> b >> c;
        // as b^c can be formulate as q*(p-1) + r
        // a^b^c = a^(q*(p-1)+r)
        //       = a^(q*(p-1)) * a^r
        //       = (a^(p-1))^q * a^r
        //       = 1^q * a^r
        // r = (b^c) % p-1
        std::cout << fastpow(a, fastpow(b,c,MODULO-1), MODULO) << '\n';
    }
    return 0;
}