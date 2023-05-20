/*
CONTEST:    CSES Problem Set
TASK:       1754:   Coin Piles
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 25/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    cin >> t;
    while (t--){
        cin >> a >> b;
        if ((a+b)%3==0 && max(a,b)<=min(a,b)*2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}