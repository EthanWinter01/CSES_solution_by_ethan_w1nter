/*
task: 1091 - Concert Tickets
date: 05 / 07 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1091/
*/

#include <iostream>
#include <set>
#include <algorithm>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n,m,h,t;
    std::cin >> n >> m;
    std::multiset<int> ticket;
    for (int i=0; i<n; i++){
        std::cin >> h;
        ticket.insert(-h);
    }
    while (m--){
        std::cin >> t;
        if (ticket.lower_bound(-t) == ticket.end()){
            std::cout << "-1\n";
        } else {
            std::cout << -1*(*ticket.lower_bound(-t)) << '\n';
            ticket.erase(ticket.lower_bound(-t));
        }
    }
}