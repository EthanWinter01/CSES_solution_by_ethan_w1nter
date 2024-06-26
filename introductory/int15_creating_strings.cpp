/*
task: 1622 - Creating Strings
date: 04 / 30 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/submit/1622/
*/

#include <iostream>
#include <algorithm>
#include <set>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    std::cin >> str;
    std::sort(str.begin(), str.end());
    std::set<std::string> perm;
    perm.insert(str);
    while (std::next_permutation(str.begin(), str.end()))
        perm.insert(std::string(str.begin(),str.end()));
    std::cout << perm.size() << '\n';
    for (auto it : perm)
        std::cout << it << '\n';
    return 0;
}