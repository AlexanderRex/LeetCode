class Solution {
public:
   int findNumbers(vector<int>& nums) {
      int even_count = 0; // initialize counter for numbers with an even number of digits

      // iterate through all elements in the nums vector
      for (size_t i = 0; i < nums.size(); i++) {
         // calculate the number of digits in the number using log10,
         // floor the result to an integer and add 1
         int num_digits = static_cast<int>(std::log10(nums[i])) + 1;

         // if the number of digits is even, increment the counter
         if (num_digits % 2 == 0) {
            even_count++;
         }
      }

      // return the count of numbers with an even number of digits
      return even_count;
   }
};
