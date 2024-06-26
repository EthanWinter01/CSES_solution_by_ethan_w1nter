/*
task: 1620 - Factory Machine
date: 05 / 14 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1620
*/

#include <iostream>
#include <algorithm>
#include <vector>
bool check(long long mid, int n, int t, std::vector<int>& m){
    long long cnt = 0;
    for (int i=0; i<n; i++){
        cnt += mid/m[i];
        if (cnt >= t)
            return true;
    }
    return false;
}

int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,t;
    std::cin >> n >> t;
    std::vector<int> machine(n);
    for (int i=0; i<n; i++)
        std::cin >> machine[i];
    sort(machine.begin(), machine.end());
    
    // BINARY SEARCH
    long long low=0, high=1e18;
    while (low <= high){
        long long mid = low+(high-low)/2;
        if (check(mid,n,t,machine))
            high = mid-1;
        else 
            low = mid+1;
    }
    std::cout << low << '\n';
    return 0;
}