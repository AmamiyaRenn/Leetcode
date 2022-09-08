#include "including.h"

class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int r_mat = mat.size(), c_mat = mat[0].size();
        if (r_mat * c_mat != r * c)
            return mat;
        vector<vector<int>> result;
        int p_r = 0, p_c = 0;
        for (int i = 0; i < r; i++)
        {
            vector<int> temp;
            for (int j = 0; j < c; j++)
            {
                temp.push_back(mat[p_r][p_c]);
                p_c++;
                if (p_c == c_mat)
                {
                    p_c = 0;
                    p_r++;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};