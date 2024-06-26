/*
task: 1624 - Chessboard and Queens
date: 05 / 01 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1624
*/

#include <iostream>
#include <vector>
const int N = 8; // size
std::vector<std::vector<char>> grid(N, std::vector<char>(N));
std::vector<std::vector<bool>> visited(N, std::vector<bool>(N));

bool place(int row, int col){
    bool yes = true;
    for (int i=0; i<N; i++)
        if (visited[row][col] || visited[i][col])
            yes = false;
    for (int i=0; row-i>=0 && col-i>=0; i++)
        if (visited[row-i][col-i])
            yes = false;
    for (int i=0; row-i>=0 && col+i<N; i++)
        if (visited[row-i][col+i])
            yes = false;
    return yes;
}
bool check(){
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            if (visited[i][j] && grid[i][j]=='*')
                return false;
    return true;
}
void dfs(int i, int &ans){
    if (i == N){
        if (check())
            ans++;
        return;
    }
    for (int j=0; j<N; j++){
        if (place(i, j)){
            visited[i][j] = true;
            dfs(i+1, ans);
            visited[i][j] = false;
        }
    }
}
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    for (int i=0; i<8; i++)
        for (int j=0; j<8; j++)
            std::cin >> grid[i][j];
    int answer = 0;
    dfs(0, answer);
    std::cout << answer << '\n';
    return 0;
}