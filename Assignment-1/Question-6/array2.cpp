/*Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct.*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n;
    cout << "Enter the Size of Array";
    cin >> n;
    int nums[n];
    cout << "Enter the Array Element";
    for (i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (i = 0; i < n - 1; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {

                cout << "true";
                exit(1);
            }
        }
    }
}