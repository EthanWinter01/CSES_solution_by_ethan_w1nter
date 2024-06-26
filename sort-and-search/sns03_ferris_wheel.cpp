/*
task: 1090 - Collecting Numbers I
date: 05 / 05 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1090
*/

#include <iostream>
#include <vector>
#include <algorithm>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x;
    std::cin >> n >> x;
    std::vector<int> kid(n);
    for (int i=0; i<n; i++)
        std::cin >> kid[i];
    sort(kid.begin(), kid.end());
    int l=0, r=n-1;
    while (r>=l){
        if (kid[l]+kid[r]<=x)
            l++;
        r--;
    }
    std::cout << n-r-1 << '\n';
    return 0;
}