/*

Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
Note:

1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
Follow up:

Can you solve it in O(N) time and O(1) space?
*/

class Solution {
    
    
public:
    
    
    void remove(string& s, int& len) {
        for(int i = 0; i < (int) s.length(); ++i) {
            if(s[i] == '#') {
                if(len > 0) {
                    len--;
                }
            }
            else {
                s[len] = s[i];
                len++;
            }
        }
    }
    
    bool backspaceCompare(string S, string T) {
        
        int len_s = 0, len_t = 0;
        remove(S, len_s);
        remove(T, len_t);
        if(len_s != len_t) {
            return false;
        }
        for(int i = 0; i < len_s; ++i) {
            if(S[i] != T[i]) {
                return false;
            }
        }
        return true;
        
        
        
    }
};
