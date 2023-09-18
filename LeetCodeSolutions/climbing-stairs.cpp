// https://leetcode.com/problems/climbing-stairs/

class Solution
{
public:
    int climbStairs(int n)
    {
        int t1 = 0;
        int t2 = 1;
        int nextTerm;

        for (int i = 1; i <= n; i++)
        {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        return nextTerm ;
    }
};