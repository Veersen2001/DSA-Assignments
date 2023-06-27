/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
     let j = 0;
     let length = nums.length;

   for (let i = 0; i < length; i++) {
    if (nums[i] !== 0) {
        nums[j] = nums[i];
        j++;
    }
}

for (let i = j; i < length; i++) {
    nums[i] = 0;
}

return nums;
// solved in leetcode

};