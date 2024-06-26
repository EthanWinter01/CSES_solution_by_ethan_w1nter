/*
task: 1081 - Common Divisors
date: 05 / 01 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/submit/1081/
*/


#include <iostream>
#include <algorithm>
#include <vector>
const int MAX = 1e6;
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<int> arr(MAX+1, 0);
    for (int i=0; i<n; i++){
        int x;
        std::cin >> x;
        arr[x]++;
    }
    for (int i=MAX; i>=1; i--){
        int cnt = 0;
        for (int j=i; j<=MAX; j+=i)
            cnt += arr[j];
        if (cnt >= 2){
            std::cout << i << '\n';
            return 0;
        }
    }
    return 0;
}