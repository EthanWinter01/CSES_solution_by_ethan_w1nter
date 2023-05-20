/*
CONTEST:    CSES Problem Set
TASK:       1622:   Creating String
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 20/05/2023
*/

#include <bits/stdc++.h>
using namespace std;
set<string> result;
string str;
void permutation(int left, int right){
    if (left == right){
        result.insert(str);
    } else {
        for (int i=left; i<=right; ++i){
            swap(str[left],str[i]);
            permutation(left+1,right);
            swap(str[left],str[i]);
        }
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> str;
    permutation(0,str.size()-1);
    cout << result.size() << "\n";
    for (auto it : result)
        cout << it << "\n";
    return 0;
}