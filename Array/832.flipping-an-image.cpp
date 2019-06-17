/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        int tmp;
        for(int i=0; i<row; i++){
            for(int j=0; j<(col+1)/2; j++){
                tmp = A[i][j];
                A[i][j] = A[i][col-j-1];
                A[i][col-j-1] = tmp; 
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                A[i][j] = 1 - A[i][j];
            }
        }
    
    return A;
    }
};