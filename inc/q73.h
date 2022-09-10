#include "including.h"

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size(), col = matrix[0].size();
        bool *a_row = new bool[row](), *a_col = new bool[col]();
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                if (matrix[i][j] == 0)
                    a_row[i] = a_col[j] = true;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
            {
                if (a_row[i])
                    matrix[i][j] = 0;
                if (a_col[j])
                    matrix[i][j] = 0;
            }
    }
};