/* This java code uses hashing set method where it includes creating a new hash set and adding elemnts to it one by one where if the user encounters an elemnt was not added successfully it's proven a repeating element(at least twice!) and returns true otherwise returns false as an output */

class Solution {
    public boolean containsDuplicate(int[] numbers) {
        Set<Integer> set = new LinkedHashSet<>();
        for (int n : numbers) 
        {
            if (!set.add(n)) 
            {
                return true;
            }
        }
        return false;
    }
}