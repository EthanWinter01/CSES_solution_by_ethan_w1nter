/*
CONTEST:    CSES Problem Set
TASK:       1755:   Palindrome Reorder
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 25/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    vector<int> chars(26,0);
    deque<char> answer;
    int len = str.length();
    for (int i=0; i<len; i++)
        chars[str[i]-'A']++;
    if (len%2 == 0){
        for (int i=0; i<26; i++){
            if (chars[i]%2==1){
                cout <<"NO SOLUTION";
                return 0;
            }
            while (chars[i]>0){
                answer.push_back((char)(i+'A'));
                answer.push_front((char)(i+'A'));
                chars[i] -= 2;
            }
        }
    } else {
        int middleCount = 0;
        for (int i=0; i<26; i++){
            if (chars[i]%2==1){
                if (middleCount==0) {
                    answer.push_front((char)(i+'A'));
                    chars[i]--;
                    middleCount++;
                } else {
                    cout <<"NO SOLUTION";
                    return 0;
                }
            }
        }
        for (int i=0; i<26; i++){
            while (chars[i]>0){
                answer.push_back((char)(i+'A'));
                answer.push_front((char)(i+'A'));
                chars[i] -= 2;
            }
        }
    }
    for (auto dq : answer)
        cout << dq;
    return 0;
}