/*
CONTEST:    CSES Problem Set
TASK:       1623:   Apple Division
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 20/05/2023
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, sum=0LL;
    cin >> n;
    vector<ll> apple(n);
    for (int i=0; i<n; ++i){
        cin >> apple[i];
        sum += apple[i];
    }
    ll answer = LLONG_MAX;
    for (int i=1; i<(1<<n); ++i){
        ll temp = 0;
        for (int j=0; j<apple.size(); ++j)
            if ((i>>j) & 1)
                temp += apple[j];
        ll compare = abs(temp - (sum-temp));
        answer = min(answer,compare);
    }
    cout << answer;
    return 0;
}