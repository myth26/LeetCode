/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string ans;
    string intToRoman(int num) {
        int n;
        while(num > 0){
            if(num >= 1000){
                n = num / 1000;
                while(n--){
                    ans += "M";
                }
                num %= 1000;
            }
            else if(num >= 100){
                if(num < 400){
                    n = num / 100;
                    while(n--){
                        ans += 'C';
                    }
                }
                else if(num <= 500){
                    if(num < 500) ans += "C";
                    ans += "D";
                }
                else if(num < 900){
                    ans += "D";
                    n = (num - 500) / 100;
                    while(n--){
                        ans += "C";
                    }
                }
                else{
                    ans += "CM";
                }
                num = num % 100;
            }
            else if(num >= 10){
                if(num < 40){
                    n = num / 10;
                    while(n--){
                        ans += 'X';
                    }
                }
                else if(num <= 50){
                    if(num < 50) ans += "X";
                    ans += "L";
                }
                else if(num < 90){
                    ans += "L";
                    n = (num - 50) / 10;
                    while(n--){
                        ans += "X";
                    }
                }
                else{
                    ans += "XC";
                }
                num = num % 10;
            }
            else{
                if(num < 4){
                    n = num;
                    while(n--){
                        ans += 'I';
                    }
                }
                else if(num <= 5){
                    if(num < 5) ans += "I";
                    ans += "V";
                }
                else if(num < 9){
                    ans += "V";
                    n = num - 5;
                    while(n--){
                        ans += "I";
                    }
                }
                else{
                    ans += "IX";
                }
                num = 0;
            }
        }
        return ans;
    }
};
// @lc code=end

