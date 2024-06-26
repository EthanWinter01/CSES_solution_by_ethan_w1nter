/*
task: 1642 - Sum of Four Values
date: 05 / 07 / 2024 
author: ethan_w1nter
linked: https://cses.fi/problemset/task/1642/
*/

#include <iostream>
#include <vector>
#include <map>
#include <utility>
const int MAX = 1001;
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x;
    std::cin >> n >> x;
    int arr[n];
    std::map<int,std::pair<int,int>> needToSum;
    for (int i=0; i<n; i++){
        std::cin >> arr[i];
        for (int j=0; j<i; j++)
            needToSum[x-(arr[i]+arr[j])] = {j,i}; 
    }
    bool flag = false;
    for (int i=0; i<n-1 && !flag; i++){
        for (int j=i+1; j<n-1; j++){
            if (needToSum.find(arr[i]+arr[j]) != needToSum.end()
              && needToSum[arr[i]+arr[j]].first != i && needToSum[arr[i]+arr[j]].first != j
              && needToSum[arr[i]+arr[j]].second != i && needToSum[arr[i]+arr[j]].second != j){
                std::cout << i+1 << ' ' << j+1 << ' ' << needToSum[arr[i]+arr[j]].first+1 << ' ' << needToSum[arr[i]+arr[j]].second+1 << '\n';    
                flag = true;
                break;
            }
        }
    }
    if (!flag)
        std::cout << "IMPOSSIBLE\n";
    return 0;
}