/*
task: 1618 - Trailing Zeros
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1618
*/

#include <iostream>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, zeroCounter=0;
    std::cin >> n;
    // using math for solving this question
    while (n){
        zeroCounter += n/5;
        n /= 5;
    }
    std::cout << zeroCounter << "\n";
    return 0;
}