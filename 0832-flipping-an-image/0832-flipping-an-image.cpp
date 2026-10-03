class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();

        for(int i=0; i<n; i++){
            int start=0, end=m-1;
                while(start<=end){
                    swap(image[i][start],image[i][end]);
                    start++, end--;
                }
            for(int j=0; j<m; j++){
                if(image[i][j]==0)
                image[i][j] = 1;
                else
                image[i][j] = 0;
            }
        }
        return image;
    }
};