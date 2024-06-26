/*
task: 2162 - Josephus Problem I
date: 05 / 04 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2162
*/

#include <iostream>
#include <queue>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::queue<int> line;
    for (int i=1; i<=n; i++)
        line.push(i);
    bool flag = false;
    while (!line.empty()){
        if (flag){
            std::cout << line.front() << ' ';
            line.pop();
            flag = false;
            continue;
        }
        line.push(line.front());
        line.pop();
        flag = true;
    }
    return 0;
}