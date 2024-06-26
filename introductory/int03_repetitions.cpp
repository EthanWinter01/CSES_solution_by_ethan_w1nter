/*
task: 1069 - Repetitions
date: 04 / 26 / 2024 
author: ethan_w1nter
link: https://cses.fi/problemset/task/1069
*/

#include <iostream>
#include <string>
int main(void){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string dna;
    std::cin >> dna;
    int count=1, maxrepeat=1;
    for (int i=1; i<dna.length(); i++){
        if (dna[i]==dna[i-1])
            count++;
        else 
            count = 1;
        if (count > maxrepeat)
            maxrepeat = count;
    }
    std::cout << maxrepeat << "\n";
    return 0;
}