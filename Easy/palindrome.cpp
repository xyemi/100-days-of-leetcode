#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        bool palindrome = true;
        std::string num = std::to_string(x);

        int middle = num.length() / 2;
        //int 

        for(int i = 0, last = num.length() - 1; i < middle; i++, last--){
            if(num[i] != num[last]){
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};