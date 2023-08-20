class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
      // Check if the array is empty
      if (nums.empty()) {
         return 0;
      }

      // Initialize a variable to track unique elements
      int uniqueCount = 1;

      // Iterate through the array, starting from the second element
      for (int i = 1; i < nums.size(); i++) {
         // If the current element is different from the previous one
         if (nums[i] != nums[i - 1]) { 
            // Place the new unique element at position uniqueCount
            nums[uniqueCount] = nums[i];
            // Increment the unique element count
            uniqueCount++;
         }
      }

      // Return the count of unique elements
      return uniqueCount;
   }
};
