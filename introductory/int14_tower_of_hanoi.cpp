/*
task: 2165 - Tower of Hanoi
date: 04 / 30 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2165
*/

#include <iostream>
void move(int from, int aux, int to, int depth){
    if (depth == 1){
        std::cout << from << ' ' << to << '\n';
        return;
    }
    move(from, to, aux, depth-1);
    std::cout << from << ' ' << to << '\n';
    move(aux, from, to, depth-1);
}
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::cout << (1<<n)-1 << '\n';
    move(1,2,3,n);
    return 0;
}