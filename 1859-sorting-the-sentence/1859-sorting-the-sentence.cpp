class Solution {
public:
    string sortSentence(string sen) {
         int N = sen.size();
        string word;
        vector<string>vec(10);
        for(int i = 0; i < N; i++)
        {
            if(sen[i] >= 48 && sen[i] <= 57) // it's implying it's a number where ASCII value starts from 48.
            {
                vec[sen[i]-48] = word + " ";
                word = "";
                i++;
            }
           else
           {
              word += sen[i];  
           }
              
        }
        string total;
        
        for(string str:vec)
        {
           total+=str; 
        }
         
        total.pop_back(); // useful for removing the space after the last step
        
        return total;
    }
};