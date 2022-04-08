/* This method is the easiest method to remove duplicates where it directly uses the unique standard template library in C++ to find the duplicate items*/

//more precise and good time complexity

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& number) {
       number.erase(std::unique(number.begin(), number.end()), number.end());
        
        return number.size();
    }
};