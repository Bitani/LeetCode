class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count = 0, total = 0, dif = INT_MAX;
        for (int i = 1; i < nums.size(); i++) 
        {
            int rel = nums[i] - nums[i-1];
            if (rel == dif) total += count++;
            else 
            {
                dif = rel;
                count = 1;
            }
        }
        return total;
    }
};