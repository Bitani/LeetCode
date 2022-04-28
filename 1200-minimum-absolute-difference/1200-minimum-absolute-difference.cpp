// Time Comlexity of O(n).

// Space Complexity of O(n) due to storing the array elements in the hash(unordered) set.

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& array) 
    {
     int N = array.size();
        
    sort(array.begin(), array.end());
        
    unordered_set<int> set; 
        
    int abs = INT_MAX;
        
    for(int i=0;i<N-1;i++)
    {
        abs = min(abs, array[i+1] - array[i]);
        set.insert(array[i]);
    }
        
    set.insert(array[N-1]);
        
    vector<vector<int>> vec;
        
    for(int i=0;i<N;i++)
    {
        if(set.count(array[i]-abs))
        {
            vec.push_back({array[i]-abs, array[i]});
        }
    }
    return vec;
  }
};