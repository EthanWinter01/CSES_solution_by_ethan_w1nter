/*
CONTEST:    CSES Problem Set
TASK:       1083:   Missing Number
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 17/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<bool> nums(n+1,false);
    int q=n, a;
    while (--q){
        cin >> a;
        nums[a] = true;
    }
    for (int i=1; i<=n; i++){
        if (!nums[i]){
            cout << i;
            break;
        }
    }
    return 0;
}