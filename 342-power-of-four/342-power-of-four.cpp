/*
The solution for power of four can be solved by the natural mathematical properties of logarithms.
If n is a power of 4, then 4^x = n. This can be rewritten as log4 n = x, where x will be an integer if n is a power of 4.
There is another propert so that log4 n can be rewritten as log n / log 4 which will produce a slight amount of floating point error, 
but any value that is within a close margin (1e-10) while n is constrained to an int will be a correct.
*/


class Solution {
public:
    bool isPowerOfFour(int num) {
        double x = log(num) / log(4);
        return abs(x - round(x)) < 1e-10;
    } 
};