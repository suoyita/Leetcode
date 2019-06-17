/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())
            return {};
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int u = 0, r = col - 1, d = row - 1, l = 0;
        while(1){

            for(int i = l; i <= r; i++)
                ans.push_back(matrix[u][i]);
            if(++u > d)
                break;
            
            for(int i = u; i <= d; i++)
                ans.push_back(matrix[i][r]);
            if(--r < l)
                break;

            for(int i = r; i >= l; i--)
                ans.push_back(matrix[d][i]);
            if(--d < u)
                break;

            for(int i = d; i >= u; i--)
                ans.push_back(matrix[i][l]);
            if(++l > r)
                break;
        }
        return ans;
    }
};

