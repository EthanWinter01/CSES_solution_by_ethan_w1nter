/*
task: 2205 - Gray Code
date: 04 / 29 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/2205
*/

#include <iostream>
#include <cmath>
#include <vector>
/* main idea 
dec bin code    gray code
0   0 0 0       0 0 0
1   0 0 1       0 0 1
2   0 1 0       0 1 1
3   0 1 1       0 1 0
4   1 0 0       1 1 0 
5   1 0 1       1 1 1 
6   1 1 0       1 0 1
7   1 1 1       1 0 0
*/
std::vector<bool> decToBinaryCode(int val, int len){
    std::vector<bool> bin(len, 0);
    int i = 0;
    while (val>0){
        bin[len-1-i] = val%2;
        val /= 2;
        i++;
    }
    return bin;
}
void printGrayCode(std::vector<bool> bin, int len){
    std::cout << bin[0];
    for (int i=1; i<len; i++)
        std::cout << (!bin[i] != !bin[i-1]);
    std::cout << "\n";
}
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<bool> binCode;
    for (int i=0; i<pow(2,n); i++){
        binCode = decToBinaryCode(i,n);
        printGrayCode(binCode, n);
    }
    return 0;
}