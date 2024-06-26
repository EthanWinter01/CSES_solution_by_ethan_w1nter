/*
task: 1754 - Coin Piles
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1754
*/

#include <iostream>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--){
        int a,b;
        std::cin >> a >> b;ง
        // mathematics explaination 
        // (2*a-b)>=0 && (2*a-b)%3==0 && (2*b-a)>=0 && (2*n-a)%3==0
        if ((a+b)%3==0 && std::max(a,b)<=std::min(a,b)*2)
            std::cout << "YES\n";
        else 
            std::cout << "NO\n";
    }
    return 0;
}