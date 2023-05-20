/*
CONTEST:        CSES Problem Set
TASK:           1071:   Number Spiral
AUTHOR:         ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:       C++
WRITTEN ON:     18/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        long long x,y,mx;
        cin >> x >> y;
        mx = max(x,y);
        if (mx%2 == 0){
            if (y==1)
                cout << mx*mx << "\n";
            else if (x < mx)
                cout << (mx*mx-(mx-1))-(mx-x) << "\n";
            else if (x == mx)
                cout << mx*mx-(y-1) << "\n";

        } else {
            if (x==1)
                cout << mx*mx << "\n";
            else if (y < mx)
                cout << (mx*mx-(mx-1))-(mx-y) << "\n";
            else if (y == mx)
                cout << mx*mx-(x-1) << "\n";
        }
    }
    return 0;
}