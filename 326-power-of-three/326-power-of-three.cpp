class Solution {
public:
    bool isPowerOfThree(int n) {
    double a = log(n) / log(3);
        return abs(a - round(a)) < 1e-10;
    }
};