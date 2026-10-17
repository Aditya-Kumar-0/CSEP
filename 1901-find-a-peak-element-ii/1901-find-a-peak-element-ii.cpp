class Solution {
public:

    int maxfind(vector<vector<int>>&mat, int n, int m, int col){
        int index = -1;
        int maxval = -1;
        for(int i=0; i<n; i++){
            if(mat[i][col]>maxval){
                maxval = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low + (high-low) / 2;
            int maxRowIndex = maxfind(matrix,n,m,mid);
            int left = mid - 1>=0 ? matrix[maxRowIndex][mid-1] : -1;
            int right = mid + 1 < m ? matrix[maxRowIndex][mid+1] : -1;
            if(matrix[maxRowIndex][mid] > left && matrix[maxRowIndex][mid] > right){
                return {maxRowIndex,mid};
            }
            else if(matrix[maxRowIndex][mid] < left){
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return {-1,-1};
    }
};