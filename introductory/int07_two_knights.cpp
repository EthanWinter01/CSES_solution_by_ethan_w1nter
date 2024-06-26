/*
task: 1072 - Two Knights
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1072
*/

#include <iostream>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    // all possible move = (n*n)*(n*n-1)/2
    // invalid answer = 2*2*(n-1)*(n-2)
    for (long long i=1; i<=n; i++)
        std::cout << ((i*i)*(i*i-1)/2)-(4*(i-1)*(i-2)) << "\n";
    return 0;
}