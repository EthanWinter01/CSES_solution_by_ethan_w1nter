/*
task: 1755 - Palindrome Reorder
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1755
*/

#include <iostream>
#include <vector>
#include <deque>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::vector<int> map(26,0);
    std::string str;
    std::cin >> str;
    int len = str.length();
    for (int i=0; i<len; i++)
        map[str[i]-'A']++;
    
    std::deque<char> answer;
    if (len%2 == 0){
        for (int i=0; i<26; i++){
            if (map[i]%2==1){
                std::cout << "NO SOLUTION" << std::endl;
                return 0;
            }
            while (map[i] > 0){
                answer.push_front(i+'A');
                answer.push_back(i+'A');
                map[i] -= 2;
            }
        }
    } else {
        bool middleCount = false;
        for (int i=0; i<26; i++){
            if (map[i]%2==1){
                if (!middleCount){
                    answer.push_back(i+'A');
                    map[i]--;
                    middleCount = true;
                } else {
                    std::cout << "NO SOLUTION" << std::endl;
                    return 0;
                }
            }    
        }
        for (int i=0; i<26; i++){
            while (map[i] > 0){
                answer.push_front(i+'A');
                answer.push_back(i+'A');
                map[i] -= 2;
            }
        }
    }
    
    for (char it : answer)
        std::cout << it;
    std::cout << "\n";
    return 0;
}