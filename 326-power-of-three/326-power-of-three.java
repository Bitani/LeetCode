class Solution {
public boolean isPowerOfThree(int n) {
    if (n == 0)
        {
            return false;
        }
  else
        return (Math.log10(n) / Math.log10(3)) % 1 == 0;
    }
}