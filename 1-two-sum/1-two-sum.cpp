class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> match;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            if(match.find(target-nums[i])!=match.end())
            {
                ans.push_back(match[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            match[nums[i]]=i;
        }
        return ans;
    }
};