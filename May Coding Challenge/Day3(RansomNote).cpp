class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
    int count[256] = {0}; 
    for (int i = 0; i < magazine.length(); i++) 
        count[magazine[i]]++; 
        
    for (int i = 0; i < ransomNote.length(); i++) 
    { 
        if (count[ransomNote[i]] == 0) 
           return false; 
        count[ransomNote[i]]--; 
    } 
    return true; 

    }
};
