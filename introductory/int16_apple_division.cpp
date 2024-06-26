/*
task: 1623 - Apple Division
date: 04 / 30 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1623
*/

#include <iostream>
#include <math.h>
#include <climits>
#include <vector>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    long long sum=0LL;
    std::cin >> n;
    std::vector<int> apple(n);
    for (int i=0; i<n; ++i){
        std::cin >> apple[i];
        sum += apple[i];
    }
    long long answer = LLONG_MAX;
    for (int i=1; i<(1<<n); ++i){
        long long temp = 0;
        for (int j=0; j<apple.size(); ++j)
            if ((i>>j) & 1)
                temp += apple[j];
        long long compare = abs(temp - (sum-temp));
        answer = std::min(answer,compare);
    }
    std::cout << answer << '\n';
    return 0;
}
