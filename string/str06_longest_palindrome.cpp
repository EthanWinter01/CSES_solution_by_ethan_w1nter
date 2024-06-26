/* MANACHER'S ALGORITHM */
#include <iostream>
#include <string>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    std::cin >> str;
}


/* NAIVE METHOD
#include <iostream>
#include <string>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    std::cin >> str;
    int len = str.length();
    int palindrome_maxlen = 1;
    int palindrome_begin = 0;
    for (int i=0; i<len-1; i++){
        if (i>0 && str[i-1]==str[i+1]){
            int j = 1;
            int palindrome_size = 1;
            while (i+j<len && i-j>=0 && str[i-j]==str[i+j]){
                palindrome_size += 2;
                j++;
            }
            if (palindrome_size > palindrome_maxlen){
                palindrome_begin = i-j+1;
                palindrome_maxlen = palindrome_size;
            }
        } 
        if (str[i]==str[i+1]){
            int j = 1;
            int palindrome_size = 0;
            while (i+j<len && i-j+1>=0 && str[i-j+1] == str[i+j]){
                palindrome_size += 2;
                j++;
            }
            if (palindrome_size > palindrome_maxlen){
                palindrome_begin = i-j+2;
                palindrome_maxlen = palindrome_size;
            }
        }
    }
    std::cout << str.substr(palindrome_begin, palindrome_maxlen) << "\n";
    return 0;
}
*/