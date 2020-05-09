class Solution {
public:
    bool isPerfectSquare(int num) {
 
    long double a = sqrt(num); 
  
    return ((a - floor(a)) == 0); 

    }
};
