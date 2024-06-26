/*
task: 1640 - Sum of Two Values
date: 05 / 07 / 2024 
author: ethan_w1nter
linked: https://cses.fi/problemset/task/1640/
*/

#include <iostream>
#include <vector>
#include <map>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,x;
    std::cin >> n >> x;
    std::vector<int> arr(n);
    std::map<int,int> needToSum;
    for (int i=0; i<n; i++){
        std::cin >> arr[i];
        needToSum[x-arr[i]] = i;
    }
    bool flag = false;
    for (int i=0; i<n; i++){
        if (needToSum.find(arr[i]) != needToSum.end() && needToSum[arr[i]]!=i){
            std::cout << i+1 << ' ' << needToSum[arr[i]]+1 << '\n';
            flag = true;
            break;
        }
    }
    if (!flag) 
        std::cout << "IMPOSSIBLE\n"; 
    return 0;
}