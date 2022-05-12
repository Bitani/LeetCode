class Solution {
public:
    string removeDuplicates(string s) {
        string x ="";
        for(int i=0; i<(int)s.size(); i++)
        {
            if(x.size()>0 && x.back() == s[i]) 
            {
               x.pop_back();
            }
            else{
                x.push_back(s[i]);
            }
        }
        return x;
    }
};