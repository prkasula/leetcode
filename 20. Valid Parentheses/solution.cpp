#include <iostream> 
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;



class Solution {
public:
    bool isValid(string s) {
        unordered_map<char , char> parenth;
        parenth[')'] = '(';
        parenth[']'] = '[';
        parenth['}'] = '{';
        
        stack<char> checker; 
        
        for(size_t i = 0; i < s.size() ; i++) {
            if(parenth.find(s[i]) != parenth.end()) {
                if(!checker.empty() && checker.top() == parenth[s[i]]) {
                    checker.pop();
                }
                else {
                    return false; 
                }
            }
            else {
                checker.push(s[i]);
            }
        }
        
        if(checker.empty()) {
            return true;
        }
        
        return false; 
    }
};