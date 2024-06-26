/*
task: 1068 - Weird Algorithm
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1068/
*/

#include <iostream>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long n;
    std::cin >> n;
    // for explaination, look up Conratz's Conjecture
    while (n!=1){
        std::cout << n <<" ";
        if (n%2==0)
            n /= 2;
        else 
            n = (3*n)+1;
    }
    std::cout << "1\n";
    return 0;
}
