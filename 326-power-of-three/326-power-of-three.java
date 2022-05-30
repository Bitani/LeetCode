class Solution {
public boolean isPowerOfThree(int num) {
    if (num == 0)
        {
            return false;
        }
  else
  {
        return (Math.log10(num) / Math.log10(3)) % 1 == 0;
    }
    
}
}