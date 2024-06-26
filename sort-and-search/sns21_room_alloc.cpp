/*
task: 1164 - Room Allocation
date: 05 / 14 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1164
*/

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
class query{
    public:
        int type;
        int time;
        int idx;
        bool operator<(const query& other) const{
            if (this->idx == other.idx)
                return this->type < other.type;
            return this->time == other.time? this->type < other.type : this->time < other.time;
        }
};

int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<query> event(2*n);
    std::set<int> room;
    for (int i=0; i<n; i++){
        int a,b;
        std::cin >> a >> b;
        event[2*i] = {0, a, i+1};
        event[2*i+1] = {1, b, i+1};
        room.insert(i+1);
    }
    std::vector<int> answer(n+1);
    sort(event.begin(), event.end());
    for (int i=0; i<2*n; i++){
        if (event[i].type == 0){
            answer[event[i].idx] = *room.begin();
            room.erase(room.begin());
        } else {
            room.insert(answer[event[i].idx]);
        }
    }
    int max_room = 0;
    for (int i=1; i<=n; i++)
        max_room = std::max(max_room, answer[i]);
    
    std::cout << max_room << '\n';
    for (int i=1; i<=n; i++)
        std::cout << answer[i] << " \n"[i==n];
    return 0;
}