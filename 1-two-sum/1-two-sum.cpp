class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) 
   {
    vector<int> vec(nums.begin(), nums.end());
       
    vector<int> ans;
       
    sort(vec.begin(), vec.end());
       
    int start=0, end=nums.size()-1;
       
    while(start<end)
      {
      if(vec[start]+vec[end]==target){
        break;
      }
      else if(vec[start]+vec[end]<target)
        start++;
      else
        end--;
    }
    for(int i=0;i<nums.size();i++)
    {
      if(nums[i]==vec[start] || nums[i]==vec[end]) 
        ans.push_back(i);
    }
    return ans;
  }
};