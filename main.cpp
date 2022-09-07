#include "inc/q88.h"

using namespace std;

int main()
{
    vector<int> nums1{2, 0};
    vector<int> nums2{1};
    Solution solution;
    solution.merge(nums1, 1, nums2, 1);
    for (int num1 : nums1)
        cout << num1 << " ";
    cout << endl;

    return 0;
}