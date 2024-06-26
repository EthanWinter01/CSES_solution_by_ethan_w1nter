/*
task: 1094 - Weird Algorithm
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1094/
*/

#include <iostream>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x, maxCurrent;
    std::cin >> n;
    long long answer=0;
    std::cin >> x;
    maxCurrent = x;
    n--;
    while (n--){
        std::cin >> x;
        if (maxCurrent < x)
            maxCurrent = x;
        answer += maxCurrent-x;
    }
    std::cout << answer << "\n";
    return 0;
}