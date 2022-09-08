#include "including.h"

class Solution
{
public:
    void hanota(vector<int> &A, vector<int> &B, vector<int> &C)
    {
        moveHanota(A.size(), A, C, B);
    }

private:
    void moveHanota(size_t n, vector<int> &from, vector<int> &to, vector<int> &via)
    {
        if (n == 1)
        {
            to.push_back(from.back());
            from.pop_back();
            return;
        }
        moveHanota(n - 1, from, via, to);
        moveHanota(1, from, to, via);
        moveHanota(n - 1, via, to, from);
    }
};