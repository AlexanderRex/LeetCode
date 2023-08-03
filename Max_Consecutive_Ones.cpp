class Solution {
public:
   int findMaxConsecutiveOnes(vector<int>& nums) {

      int sum = 0;
      int max_sum = 0;

      for (int i = 0; i <= nums.size() - 1; i++)
      {
         if (nums[i] == 1)
         {
            sum++;
         }
         else
         {
            sum = 0;
         }
         if (max_sum < sum)
         {
            max_sum = sum;
         }

      }
      return max_sum;



   }
};