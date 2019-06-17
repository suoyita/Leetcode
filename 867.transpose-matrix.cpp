/*
 * @lc app=leetcode id=867 lang=cpp
 *
 * [867] Transpose Matrix
 */
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        if(A.empty())
            return {};
        vector<vector<int>> ans;
        int row = A.size();
        int col = A[0].size();
        ans.resize(col, vector<int>(row));
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                ans[i][j] = A[j][i];
            }
        }
        return ans;
    }
};

