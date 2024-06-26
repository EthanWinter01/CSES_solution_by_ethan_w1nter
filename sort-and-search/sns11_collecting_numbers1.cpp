/*
task: 2216 - Collecting Numbers I
date: 05 / 05 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2216
*/

#include <iostream>
#include <vector>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, answer=1;
    std::cin >> n;
    std::vector<int> pos(n);
    for (int i=0; i<n; i++){
        int x;
        std::cin >> x;
        pos[x-1] = i;
    }
    for (int i=1; i<n; i++)
        if (pos[i-1]>pos[i])
            answer++;
    std::cout << answer << '\n';
    return 0;
}