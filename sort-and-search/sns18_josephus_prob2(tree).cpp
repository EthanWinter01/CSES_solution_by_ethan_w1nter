/*
task: 2163 - Josephus Problem II
date: 05 / 01 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2163
*/

#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, k;
    __gnu_pbds::tree<int, __gnu_pbds::null_type, std::less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> T;
    std::cin >> n >> k;
    for (int i=1; i<=n; i++)
        T.insert(i);
    int idx = k;
    while (T.size()){
        idx %= T.size();
        int x = *T.find_by_order(idx);
        T.erase(x);
        std::cout << x << (" \n")[T.size()==0];
        idx += k;
    }
    return 0;
}