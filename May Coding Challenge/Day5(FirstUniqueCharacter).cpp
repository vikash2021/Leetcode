class Solution {
public:
    int firstUniqChar(string str) {
        
    pair<int, int> arr[256]; 
  
    for (int i = 0; str[i]; i++) 
    { 
        (arr[str[i]].first)++; 
         arr[str[i]].second = i; 
    } 
  
    int res = INT_MAX; 
    for (int i = 0; i < 256; i++)
        if (arr[i].first == 1) 
            res = min(res, arr[i].second); 
  
        if(res==INT_MAX)
            return -1;
        else
            return res;
        
    }
};
