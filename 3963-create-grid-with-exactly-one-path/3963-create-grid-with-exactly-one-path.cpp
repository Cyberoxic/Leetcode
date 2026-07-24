class Solution {
public:
    vector<string> createGrid(int rows, int cols) 
    {
        string blockedRow(cols, '#');
        vector<string> grid(rows, blockedRow);
        for (int i = 0; i < rows; i++) 
        {
            grid[i][0] = '.';
        }
        for (int j = 1; j < cols; j++) 
        {
            grid[rows-1][j] = '.';
        }
        return grid;
    }
};