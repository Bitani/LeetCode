/* This C++ code checks if the array contains duplicates and returns either true if there is a duplicate or false if there isn't after it the sorting procedure */

//The time complexity is O(NLogN) which is required to sort the array and then do Liner search to check if there are duplicates.

class Solution {
public:
    bool containsDuplicate(vector<int>& numbers) {
     sort(begin(numbers), end(numbers));
        for (int n = 1; n < numbers.size(); n++) {
            if (numbers[n] == numbers[n - 1]) {
                return true;
            } 
        }
        return false;
        
    }
};
