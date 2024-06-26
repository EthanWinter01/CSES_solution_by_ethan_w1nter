/*
task: 2431 - Digit Queries
date: 04 / 30 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2431
*/

#include <iostream>
#include <string>
/*
    val         len pow10   allnum  allchar
    123456789   1   0       9       9*1
    10111213... 2   1       90      90*2
    100101102...3   2       900     900*3
*/
long long pow10(long long x){
    long long res = 1;
    for (int i=0; i<x; i++)
        res *= 10;
    return res;
}
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int q;
    std::cin >> q;
    while (q--){
        long long k;
        std::cin >> k;
        if (k < 10){
            std::cout << k << '\n';
        } else {
            k--;
            long long len = 1;
            while (9*pow10(len-1)*len < k){
                k -= 9*pow10(len-1)*len;
                len++;
            }
            // k/len index of number in that len
            // k%len index in string 'num'
            std::string num = std::to_string(pow10(len-1)+(k/len)); 
            std::cout << num[k%len] << '\n';
        }
    }
    return 0;
}