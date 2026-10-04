class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(n*m != r*c)
        return mat;
        vector<vector<int>>matrix(r,vector<int>(c));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int index = i*m + j;
                int row = index/c;
                int col = index % c;
                matrix[row][col] = mat[i][j];
            }
        }
        return matrix;
    }
};