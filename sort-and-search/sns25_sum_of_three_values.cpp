/*
task: 1641 - Sum of Three Values
date: 05 / 07 / 2024 
author: ethan_w1nter
linked: https://cses.fi/problemset/task/1641
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
    for (int i=0; i<n-1 && !flag; i++){
        for (int j=i+1; j<n; j++){
            if (needToSum.find(arr[i]+arr[j]) != needToSum.end() 
              && needToSum[arr[i]+arr[j]]!=i 
              && needToSum[arr[i]+arr[j]]!=j){
                std::cout << i+1 << ' ' << j+1 << ' ' << needToSum[arr[i]+arr[j]]+1 << '\n';
                flag = true;
                break;
            }
        }
    }
    if (!flag)
        std::cout << "IMPOSSIBLE\n";
    return 0;    
}