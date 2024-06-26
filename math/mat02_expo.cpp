/*
task: 1095 - Exponentiation I
date: 05 / 01 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1095
*/

#include <iostream>
const int MODULO = 1e9+7;
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    while (n--){
        long long a, b, c = 1;
        std::cin >> a >> b;
        while (b > 0){
            if (b&1)
                c = (c*a) % MODULO;
            a = (a*a) % MODULO;
            b >>= 1;
        }
        std::cout << c << '\n';
    } 
    return 0;
}