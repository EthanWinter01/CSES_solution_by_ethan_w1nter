/*
task: 1070 - Permutations
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1070
*/

#include <iostream>
#include <vector>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    if (n == 1){
        std::cout << "1\n";
        return 0;
    }
    if (n < 4){
        std::cout << "NO SOLUTION";
        return 0;
    }
    for (int i=2; i<=n; i+=2)
        std::cout << i << " ";
    for (int i=1; i<=n; i+=2)
        std::cout << i << " ";
    std::cout << "\n";
    return 0;
}