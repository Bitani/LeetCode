class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int temp = -1;
        for(int i = 0; i < s.length(); i++)
        {
            bool flag = false;
            if (isdigit(s[i])) {

                // converting the first digit char to int
                int num = s[i] - '0';

                // checking if the digit has another digit after it
                if (i < s.length() - 1 && isdigit(s[i + 1])) {

                    // adding the digit to the digit before
                    num = num * 10 + (s[i + 1] - '0');
                    i++;

                   //maintaining a flag bool so that we 
                   //dont look for a third digit if this is false
                    flag = true;
                }

               // checking the third digit, enters if flag is true
                if (i < s.length() - 2 && isdigit(s[i + 1]) && flag) {
                    num = num * 10 + (s[i + 2] - '0');
                    i++;
                }

               // then the good old logic
                if (num > temp)
                    temp = num;
                else
                    return false;
            }
        }
        
        return true;
    }
};