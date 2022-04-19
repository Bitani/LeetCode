
//Time complexity of O(nlogn) where nlogn for sorting, n for traversing the vector two times.
//Space Complexity of O(n) where n for storing the vector and a map.

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& numbers) 
    {
        int total = numbers.size();
        
        map<int,int>sm_map;
        
        vector<int>smaller_num = numbers;
        
        sort(smaller_num.begin(),smaller_num.end());
        
        for(int i=total-1;i>=0;i--)
        {
            sm_map[smaller_num[i]]=i;
        }
        
        for(int i=0;i<total;i++)
        {
            numbers[i] = sm_map[numbers[i]];
        }
        return numbers;
    }
};