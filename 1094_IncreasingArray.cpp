/*
CONTEST:    CSES Problem Set
TASK:       1094:   Increasing Array
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 18/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    long long maxCurrent = 0,answer = 0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i]>maxCurrent)
            maxCurrent = arr[i];
        answer += maxCurrent-arr[i];
    }
    cout << answer;
    return 0;
}