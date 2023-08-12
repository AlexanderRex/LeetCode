class Solution {
public:
   // Function to duplicate zeros in the given array 'arr'
   void duplicateZeros(vector<int>& arr) {
      // Iterate through each element of the array
      for (size_t i = 0; i < arr.size(); i++)
      {
         // Check if the current element is zero
         if (arr[i] == 0)
         {
            // Insert a zero at the current position
            arr.insert(arr.begin() + i, arr[i]);
            // Remove the last element to maintain the original size of the array
            arr.pop_back();
            // Increment the index to skip the duplicated zero
            i++;
         }
      }
   }
};
