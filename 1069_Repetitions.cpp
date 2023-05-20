/*
CONTEST:    CSES Problem Set
TASK:       1069:   Repetitions
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 17/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string dna;
    cin >> dna;
    int cnt = 1, maxCnt=1;
    char current = dna[0];
    for (int i=1; i<dna.length(); i++){
        if (dna[i] == current){
            cnt++;
            maxCnt = max(maxCnt,cnt);
        } else {
            current = dna[i];
            cnt = 1;
        }
    }
    cout << maxCnt;
    return 0;
}