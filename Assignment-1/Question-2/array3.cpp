/*Given an integer array nums and an integer val, remove all occurrences
of val in nums in-place. The order of the elements may be changed. Then
return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k,
to get accepted, you need to do the following things:
• Change the array nums such that the first k elements of nums contain
the elements which are not equal to val. The remaining elements of
nums are not important as well as the size of nums.
• Return k*/

#include <iostream>
using namespace std;

int main()
{
    int i, j = 0, val;
    int n;
    cout << "Enter the Size of Array";
    cin >> n;
    int nums[n];
    cout << "Enter the Array Element";
    for (i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the Val";
    cin >> val;
    int temp = 0;

    for (i = 0; i < n - 1; i++)
    {

        if (nums[i] != val)
        {

            nums[temp] = nums[i + 1];
            temp++;

            j++;
        }
    }

    // print Array
    cout << j << "\t";
    for (i = 0; i < n; i++)
    {
        cout << nums[i] << "\n";
    }
}
