/*
task: 2162 - Josephus Problem I
date: 05 / 04 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2162
*/

#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, idx;
    __gnu_pbds::tree<int, __gnu_pbds::null_type, std::less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> T;
    std::cin >> n;
    for (int i=1; i<=n; i++)
        T.insert(i);
    idx = 1;
    while (T.size()){
        idx %= T.size();
        int x = *T.find_by_order(idx);
        T.erase(x);
        std::cout << x << (" \n")[T.size()==0];
        idx++;
    }
    return 0;
}