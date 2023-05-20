/*
CONTEST:    CSES Problem Set
TASK:       2205:   Gray Code
AUTHOR:     ethan_w1nter (Thanpisit Naowapradit)
LANGUAGE:   C++
WRITTEN ON: 20/05/2023
*/

#include <bits/stdc++.h>
using namespace std;
void generateGrayCode(int n){
    if (n <= 0)
        return;
    vector<string> arr;
    arr.push_back("0");
    arr.push_back("1");
    for (int i=2; i<(1<<n); i=i<<1){
        for (int j=i-1; j>=0; --j)
            arr.push_back(arr[j]);
        for (int j=0; j<i; ++j)
            arr[j] = "0"+arr[j];
        for (int j=i; j<i*2; ++j)
            arr[j] = "1"+arr[j];
    }
    for (int i=0; i<arr.size(); ++i)
        cout << arr[i] << "\n";
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    generateGrayCode(n);
    return 0;
}