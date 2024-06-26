/*
task: 1625 - Grid Paths
date: 04 / 30 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1625
*/

#include <iostream>
#include <string>
const int N = 7; // size
int answer;
std::string c;
bool vis[N][N];

bool isValid(int row, int col){
    return (row>=0 && row<N && col>=0 && col<N);
}
void dfs(int row, int col, int i){
    // Base case
    if(i == N*N-1 || (row==N-1 && col==0)){
        answer += (i==N*N-1 && (row==N-1 && col==0));
        return;
    }
    // Path can't finish case
    if ((!isValid(row+1, col) || vis[row+1][col]) && (!isValid(row-1, col) || vis[row-1][col]) 
        && (isValid(row, col-1) && !vis[row][col-1] && isValid(row, col+1) && !vis[row][col+1]))
            return;
    if ((!isValid(row, col+1) || vis[row][col+1]) && (!isValid(row, col-1) || vis[row][col-1]) 
        && (isValid(row+1, col) && !vis[row+1][col] && isValid(row-1, col) && !vis[row-1][col]))
            return;

    vis[row][col] = true;
    // Down
    if ((c[i] == 'D' || c[i] == '?') && (isValid(row+1, col) && !vis[row+1][col]))
            dfs(row+1, col, i+1);
    // Up
    if ((c[i] == 'U' || c[i] == '?') && (isValid(row-1, col) && !vis[row-1][col]))
            dfs(row-1, col, i+1);
    // Right
    if ((c[i] == 'R' || c[i] == '?') && (isValid(row, col+1) && !vis[row][col+1]))
            dfs(row, col+1, i+1);
    // Left
    if ((c[i] == 'L' || c[i] == '?') && (isValid(row, col-1) && !vis[row][col-1]))
            dfs(row, col-1, i+1);
    vis[row][col] = false;
    return;
}

int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> c;
    dfs(0, 0, 0);
    std::cout << answer << '\n';
    return 0;
}