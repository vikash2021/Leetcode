/*
Write an algorithm to determine if a number n is "happy".
A happy number is a number defined by the following process: 
Starting with any positive integer, replace the number by the sum of the squares of its digits, 
and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. 
Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1*/

class Solution {
public:
    bool isHappy(int n) {
        
        int slow, fast; 
        slow = fast = n; 
    do
    { 
       slow = numSquareSum(slow); 
       fast = numSquareSum(numSquareSum(fast)); 
  
    } 
    while (slow != fast); 
    return (slow == 1); 
        
    }
    
    int numSquareSum(int n) 
{ 
    int squareSum = 0; 
    while (n) 
    { 
        squareSum += (n % 10) * (n % 10); 
        n /= 10; 
    } 
    return squareSum; 
} 
};

