#include "including.h"

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                board[i][j] = board[i][j] == '.' ? 0 : board[i][j] - '0';
        // row
        for (int i = 0; i < 9; i++)
        {
            bool *nums = new bool[10]();
            for (int j = 0; j < 9; j++)
            {
                if (nums[board[i][j]] == true && board[i][j] != 0)
                    return false;
                nums[board[i][j]] = true;
            }
            delete[] nums;
        }
        // col
        for (int j = 0; j < 9; j++)
        {
            bool *nums = new bool[10]();
            for (int i = 0; i < 9; i++)
            {
                if (nums[board[i][j]] == true && board[i][j] != 0)
                    return false;
                nums[board[i][j]] = true;
            }
            delete[] nums;
        }
        // grid
        for (int i1 = 0; i1 < 9; i1 += 3)
            for (int i2 = 0; i2 < 9; i2 += 3)
            {
                bool *nums = new bool[10]();
                for (int j1 = 0; j1 < 3; j1++)
                    for (int j2 = 0; j2 < 3; j2++)
                    {
                        if (nums[board[i1 + j1][i2 + j2]] == true && board[i1 + j1][i2 + j2] != 0)
                            return false;
                        nums[board[i1 + j1][i2 + j2]] = true;
                    }
                delete[] nums;
            }
        return true;
    }
};