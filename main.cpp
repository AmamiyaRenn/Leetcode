#include "inc/i08_06.h"

using namespace std;

int main()
{
    vector<int> A{2, 1, 0}, B, C;
    Solution solution;
    solution.hanota(A, B, C);
    for (int a : A)
        cout << a << " ";

    return 0;
}