/*
CONTEST:    CSES Problem Set
TASK:       1068:   Weird Algorithm
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 17/04/2023
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    while (n!=1){
        cout << n << " ";
        (n%2==0)?n/=2:n=3*n+1;
    } 
    cout << "1";
    return 0;
}