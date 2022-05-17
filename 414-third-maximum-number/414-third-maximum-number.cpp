
class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        set<int>Sortednum;
        
        for(const int& number : nums)
        {
            Sortednum.insert(number);
        }
        if(Sortednum.size()<3)
        {
            return *(Sortednum.rbegin());
        }
        else
        {
            return *(next(Sortednum.rbegin(), +2));
        }
    }
};