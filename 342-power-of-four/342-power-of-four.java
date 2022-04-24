class Solution {
    public boolean isPowerOfFour(int num) {
       if (num == 0)
        {
            return false;
        }
  else
  {
        return (Math.log10(num) / Math.log10(4)) % 1 == 0;
    }
}
    
}