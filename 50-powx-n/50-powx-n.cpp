class Solution {
public:
    double myPow(double x, int n)
    {
        double ptr= 1;
        if(n == 0)
            return 1;
        ptr = myPow(x , n/2);
        if(n%2 == 0)
        {
         return ptr * ptr;   
        }
        else
        {
           if(n>0)  
           {
             return x*ptr*ptr;   
           }
          else
          {
            return (ptr*ptr)/x;
          }
        }
    }
};
