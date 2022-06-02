class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>total;
        for(int i = 0; i<matrix[0].size(); i++)
        {
            vector<int>row;
            for(int j = 0; j<matrix.size(); j++)
            {
                row.push_back(matrix[j][i]);
            }
            total.push_back(row);
        }
        return total;
        
    }
};