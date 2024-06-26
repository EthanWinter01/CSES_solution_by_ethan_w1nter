/*
task: 1083 - Missing Number
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1083
*/

#include <iostream>
#include <vector>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<bool> dict(n+1, false);
    for (int i=1; i<n; i++){
        int x;
        std::cin >> x;
        dict[x] = true;
    }
    for (int i=1; i<=n; i++)
        if (!dict[i])
            std::cout << i << "\n";
    return 0;
}