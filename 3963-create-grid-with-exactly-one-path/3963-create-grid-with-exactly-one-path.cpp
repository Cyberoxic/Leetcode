class Solution {
public:
    vector<string> createGrid(int rows, int cols) 
    {
        string Row(cols, '#');
        vector<string> grid(rows, Row);
        int limit = max(rows, cols);

        for (int i = 0; i < limit; i++) 
        {
            if (i < rows) 
            {
                grid[i][0] = '.';
            }
            if (i < cols) 
            {
                grid[rows - 1][i] = '.';
            }
        }
        return grid;
    }
};
