/*
CONTEST:    CSES Problem Set
TASK:       1618:   Trailing Zero
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 25/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,zeroCounter = 0;
    cin >> n;
    while (n){
        zeroCounter += n/5;
        n /= 5;
    }
    cout << zeroCounter;
    return 0;
}