class Solution {
public:
    bool isPowerOfFour(int num) {
        double x = log(num) / log(4);
        return abs(x - round(x)) < 1e-10;
    } 
};