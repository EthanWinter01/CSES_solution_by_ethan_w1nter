/*
task: 2217 - Collecting Numbers II
date: 05 / 05 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2217
*/

#include <iostream>
#include <vector>
#include <algorithm>
int counting_check(int x, int y, std::vector<int> &pos, std::vector<int> &arr){
    int temp = 0;
    // compare lesser
    if (pos[arr[x]] >= pos[arr[x]-1]   && y < pos[arr[x]-1]) temp++; 
    if (pos[arr[x]] <  pos[arr[x]-1]   && y >= pos[arr[x]-1]) temp--;
    // compare greater
    if (pos[arr[x]] <= pos[arr[x]+1]   && y > pos[arr[x]+1]) temp++; 
    if (pos[arr[x]] > pos[arr[x]+1]    && y <= pos[arr[x]+1]) temp--;
    return temp;
}
void update(int a, int b, std::vector<int> &pos, std::vector<int> &arr, int &cnt){
    cnt += counting_check(a,b,pos,arr);
    pos[arr[a]] = b;
    cnt += counting_check(b,a,pos,arr);
    pos[arr[b]] = a;
    std::swap(arr[a], arr[b]);
}
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m, answer=1;
    std::cin >> n >> m;
    std::vector<int> arr(n+1), pos(n+1);
    for (int i=1; i<=n; i++){
        std::cin >> arr[i];
        pos[arr[i]] = i;
    }
    for (int i=2; i<=n; i++)
        if (pos[i-1]>pos[i])
            answer++;
    while (m--){
        int a, b;
        std::cin >> a >> b;
        update(a,b,pos,arr,answer);
        std::cout << answer << '\n';
    }
    return 0;
}