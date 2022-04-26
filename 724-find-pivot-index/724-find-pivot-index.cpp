class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot = 0;
    for (auto n: nums) 
    {
        tot = tot+n;
    }

    int temp = 0;
    for(int i=0; i<nums.size(); i++) 
    {
        tot = tot-nums[i];
        if(temp == tot) 
        {
            return i;
        }
        temp += nums[i];
    }

    return -1;
    }
};