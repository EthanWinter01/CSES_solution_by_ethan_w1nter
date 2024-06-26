#include <iostream>
#include <vector>
#include <algorithm>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<long long> arr(n);
    for (int i=0; i<n; i++)
        std::cin >> arr[i];
    long long maxSubarrSum = arr[0];
    for (int i=1; i<n; i++){
        arr[i] = std::max(arr[i], arr[i-1]+arr[i]);
        maxSubarrSum = std::max(maxSubarrSum, arr[i]); 
    }
    std::cout << maxSubarrSum << '\n';
    return 0;
}