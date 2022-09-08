#include "including.h"

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        ans.push_back(vector<int>{1});
        if (numRows == 1)
            return ans;
        ans.push_back(vector<int>{1, 1});
        if (numRows == 2)
            return ans;

        for (int i = 1; i < numRows - 1; i++)
        {
            vector<int> temp{1};
            for (int j = 0; j < i; j++)
                temp.push_back(ans[i][j] + ans[i][j + 1]);
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};