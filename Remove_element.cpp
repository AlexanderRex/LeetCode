// Class definition for the solution.
class Solution {
public:
   // Function to remove all occurrences of a given value from a vector.
   // Returns the new size of the vector after removals.
   int removeElement(vector<int>& nums, int val) {

      // Start iterating over the vector from the beginning.
      for (size_t i = 0; i < nums.size(); ) {  // Notice there's no increment in the loop header.

          // Check if the current element is equal to the value we want to remove.
         if (nums[i] == val) {

            // If it is, erase the current element from the vector.
            nums.erase(nums.begin() + i);

            // Since the element is removed, we don't increment 'i' here.
         }
         else {

            // If the current element is not equal to the value, move to the next element.
            ++i;
         }
      }

      // Return the new size of the vector after removals.
      return nums.size();
   }
};
