/*
CONTEST:    CSES Problem Set
TASK:       1070:   Permutations
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
    vector<int> odd,even;
    if (n == 1){
        cout << 1;
        return 0;
    } else if (n==2 || n==3){
        cout << "NO SOLUTION";
        return 0;
    } 
    for (int i=1; i<=n; i++){
        if (i%2==0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    for (int i=0; i<even.size(); i++)
        cout << even[i] << " ";
    for (int i=0; i<odd.size(); i++)
        cout << odd[i] << " ";
    return 0;
}