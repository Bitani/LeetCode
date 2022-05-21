class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
      int N = nums.size();
        
        int start = 0;
        
        for(int i = 0; i < N; i++) 
        {
            if(nums[i] % 2 == 0) 
            {
                swap(nums[i], nums[start]);
                start++;
            } 
        }
        return nums;
    }   
    
};