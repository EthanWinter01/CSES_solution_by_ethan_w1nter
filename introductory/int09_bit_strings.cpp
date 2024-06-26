/*
task: 1617 - Bit Strings
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1617/
*/

#include <iostream>
const int MODULO = 1e9+7;
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    long long answer = 1;
    std::cin >> n;
    while (n--){
        answer *= 2;
        answer %= MODULO;
    }
    std::cout << answer << "\n";
    return 0;
}