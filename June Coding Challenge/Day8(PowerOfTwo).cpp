class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        
        if(n==0)
            return false;
        
        return ((n&(n-1))==0);
        
    }
};
