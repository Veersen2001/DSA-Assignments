/*Question 1
Given an integer array nums of 2n integers, group these integers into n
pairs (a1, b1), (a2, b2),..., (an, bn) such that the sum of min(ai, bi) for all i is
maximized. Return the maximized sum.
Example 1:
Input: nums = [1,4,3,2]
Output: 4*/

#include <iostream>
using namespace std;

int pairsum(int n, int nums[])
{
    int j, i, ans = 0;
    for (j = 0; j < n - 1; j++)
    {
        int temp = 0;
        for (i = j + 1; i < n; i++)
        {

            if (nums[j] > nums[i])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    for (j = 0; j < n; j = j + 2)
    {
        ans += nums[j];
    }

    return ans;
}

int main()
{
    int n, i, result;
    cout << "Enter the Size of Array";
    cin >> n;
    int nums[n];
    cout << "Enter the Array Element";

    for (i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    result = pairsum(n, nums);
    cout << "Output is:" << result;

    return 0;
}