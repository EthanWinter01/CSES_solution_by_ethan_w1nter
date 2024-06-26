/*
task: 1621 - Distinct Numbers
date: 05 / 04 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1621/
*/

#include <iostream>
#include <set>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x;
    std::cin >> n;
    std::set<int> S;
    for (int i=0; i<n; i++){
        std::cin >> x;
        S.insert(x);
    }
    std::cout << S.size() << '\n';
    return 0;
}