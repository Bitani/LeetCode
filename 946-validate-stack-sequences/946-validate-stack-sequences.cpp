class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int start = 0, i = 0;
        for(const int& n :  pushed)
        {
            pushed[start] = n;
            start++;
        while(start> 0 && pushed[start-1] == popped[i])
            {
              
                start--;
                i++;
            }
        }
        return start == 0; 
    }
};