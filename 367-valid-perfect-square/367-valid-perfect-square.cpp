// Time complexity of O(nlogn).

// Space complexity of O(1).

class Solution {
public:
    bool isPerfectSquare(int n) 
    {
      long total = 0;
        for (int i = 1; n > total; i += 2) 
        {
            total +=  i;
            if (total == n) 
            {
                return true;
            }
        }
        return false;   
    }
};