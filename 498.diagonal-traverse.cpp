/*
 * @lc app=leetcode id=498 lang=cpp
 *
 * [498] Diagonal Traverse
 */

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        if(row == 0)
            return ans;
        int col = matrix[0].size();
        if(col == 0)
            return ans;
        
        
        int numOfScan = row + col - 1;
        for(int i = 0; i < numOfScan; i++){
            int x, y;
            if(i % 2 == 0){
                x = i < row?  i : row - 1;
                y = i < row?  0 : i - (row - 1);
                while(x >= 0 && y < col){
                    ans.push_back(matrix[x--][y++]);
                }
            } else {
                x = i < col? 0 : i - (col - 1);
                y = i < col? i : col - 1;
                while(x < row && y >= 0){
                    ans.push_back(matrix[x++][y--]);
                }
            }
        }
        return ans;
    }
};



