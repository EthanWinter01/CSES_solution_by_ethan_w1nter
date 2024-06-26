/*
task: 1084 - Apartments
date: 05 / 04 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1084
*/

#include <iostream>
#include <vector>
#include <algorithm>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<int> customer(n);
    std::vector<int> apartment(m);
    for (int i=0; i<n; i++)
        std::cin >> customer[i];
    for (int i=0; i<m; i++)
        std::cin >> apartment[i];
    sort(customer.begin(), customer.end());
    sort(apartment.begin(), apartment.end());
    int answer = 0, i=0, j=0;
    while (i<n){
        while (j<m && apartment[j]<customer[i]-k)
            j++;       
        if (j<m && customer[i]-k<=apartment[j] && customer[i]+k>=apartment[j]){
            j++;
            answer++;
        }
        i++;
    }
    std::cout << answer << '\n';
    return 0;
}