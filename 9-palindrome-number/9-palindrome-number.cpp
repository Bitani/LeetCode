class Solution {
public:
    bool isPalindrome(int num) {
            string str  = to_string(num);//Changes the single number to a string;
            int begin = 0;
            int end = str.length() - 1;

            while(begin < end)
            {
                if(str[begin++] != str[end--])
                {
                  return false;  
                }  
            }

            return true;
        }
};