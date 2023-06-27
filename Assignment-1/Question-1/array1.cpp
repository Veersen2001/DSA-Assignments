/*Q1. Given an array of integers nums and an integer target, return indices of
the two numbers such that they add up to target.*/
#include <iostream>
using namespace std;
int main()
{

    int i, j, target;
    int n = 5;
    int nums[n];
    for (i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the target";
    cin >> target;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]";
            }
        }
    }
}