class Solution {
public:
   int findMaxConsecutiveOnes(vector<int>& nums) {
      int sum = 0; // initialize counter for consecutive ones
      int max_sum = 0; // initialize maximum counter for consecutive ones

      // iterate through all elements in the nums vector
      for (int i = 0; i <= nums.size() - 1; i++)
      {
         // if the current element is 1, increment the counter
         if (nums[i] == 1)
         {
            sum++;
         }
         // if the current element is not 1, reset the counter
         else
         {
            sum = 0;
         }
         // if the maximum counter is less than the current counter,
         // update the maximum counter
         if (max_sum < sum)
         {
            max_sum = sum;
         }
      }

      // return the maximum counter of consecutive ones
      return max_sum;
   }
};
