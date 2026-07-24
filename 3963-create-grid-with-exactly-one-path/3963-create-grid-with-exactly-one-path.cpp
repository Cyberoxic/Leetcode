class Solution {
public:
    vector<string> createGrid(int rows, int cols) 
    {
        string Row(cols, '#');
        vector<string> grid(rows, Row);
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