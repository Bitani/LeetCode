
class Solution {
    public int removeDuplicates(int[] number) {
       int num=number.length;
        if(num==0)
           {
             return num;  
           }
       int k=0;
        for(int m=0; m<=num-1; m++)
        {
           if (number[k] != number[m]) {
				
				k++;
				number[k] = number[m];
			} 
        }
        return k+1;
    }
}