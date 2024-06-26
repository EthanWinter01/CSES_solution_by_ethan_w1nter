/*
task: 1092 - Two Sets
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1092
*/

#include <iostream>
#include <vector>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long n;
    std::cin >> n;
    long long sum = (n*(n+1)/2);
    std::vector<long long> set1, set2;
    set1.reserve(n);
    set2.reserve(n);
    if (sum%2 == 0){
        std::cout << "YES\n";
        long long mid = sum/2;
        for (long long i=n; i>=1; i--){
            if (i <= mid){
                set1.push_back(i);
                mid -= i;
            } else {
                set2.push_back(i);
            }
        }
        std::cout << set1.size() << "\n";
        for (int i=set1.size()-1; i>=0; i--)
            std::cout << set1[i] << " ";
        std::cout << "\n";
        std::cout << set2.size() << std::endl;
        for (int i=set2.size()-1; i>=0; i--)
            std::cout << set2[i] << " ";
        std::cout << "\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}