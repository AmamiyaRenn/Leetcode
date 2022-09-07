#include "including.h"

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        vector<int> nums3 = nums1;
        for (int num2 : nums2)
        {
            while (i < m && num2 >= nums1[i])
            {
                nums3[i + j] = nums1[i];
                i++;
            }
            nums3[i + j] = nums2[j];
            j++;
        }
        while (i < m)
        {
            nums3[i + j] = nums1[i];
            i++;
        }
        while (j < n)
        {
            nums3[i + j] = nums2[j];
            j++;
        }
        nums1 = nums3;
    }
};