class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        rev(matrix);
    }
    
    void transpose(vector<vector<int>>& matrix) {
        for(int row = 0; row < matrix[0].size(); row++) {
            for(int col = row; col < matrix[0].size(); col++) {
                int temp = matrix[row][col];
                matrix[row][col] = matrix[col][row];
                matrix[col][row] = temp;
            }
        }
    }
    
    void rev(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix[0].size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
    
    
};