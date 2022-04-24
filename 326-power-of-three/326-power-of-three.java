class Solution {
    public boolean isPowerOfThree(int num) {
        double a = Math.log(num) / Math.log(3);
        return Math.abs(a - Math.round(a)) < 1e-10;
    }
}