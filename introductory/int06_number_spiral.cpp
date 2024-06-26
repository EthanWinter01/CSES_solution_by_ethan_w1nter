/*
task: 1071 - Number Spiral
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1071
*/

#include <iostream>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--){
        long long mx,y,x;
        std::cin >> y >> x;
        mx = std::max(x,y);
        // using math visualization to solve relation
        if (mx%2 == 0){
            if (x < y)
                std::cout << mx*mx - x + 1 << "\n";
            else if (x > y)
                std::cout << (mx-1)*(mx-1) + y << "\n";
            else
                std::cout << (mx-1)*(mx-1) + mx << "\n";
        } else {
            if (x < y)
                std::cout << (mx-1)*(mx-1) + x << "\n";
            else if (x > y)
                std::cout << mx*mx - y + 1 << "\n";
            else
                std::cout << (mx-1)*(mx-1) + mx << "\n";
        }
    }
    return 0;
}