// https://leetcode.com/problems/sqrtx/

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x <= 0)
        {
            return 0;
        }

        int first = 1;
        int last = x;
        int ans = 0;

        while (first <= last)
        {
            int mid = first + (last - first) / 2;
            if (mid <= x / mid)
            {
                ans = mid;
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }

        return ans;
    }
};
