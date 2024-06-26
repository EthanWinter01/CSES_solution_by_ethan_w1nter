/*
task: 1713 - Counting Divisors
date: 05 / 01 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1713
*/

#include <iostream>
#include <vector>
#include <cmath>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::vector<int> divisor(1e6+1, 0);
    for (int i=1; i<1e6+1; i++)
        for (int j=i; j<1e6+1; j+=i)
            divisor[j]++;
    int n;
    std::cin >> n;
    while (n--){
        int x;
        std::cin >> x;
        std::cout << divisor[x] << '\n';
    }
    return 0;
}