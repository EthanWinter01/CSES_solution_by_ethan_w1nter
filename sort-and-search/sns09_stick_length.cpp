#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i=0; i<n; i++)
        std::cin >> arr[i];
    sort(arr.begin(), arr.end());
    int median = arr[(n-1)/2];
    long long sum=0;
    for (int i=0; i<n; i++)
        sum += abs(median-arr[i]);
    std::cout << sum << '\n';
    return 0;
}