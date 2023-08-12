class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> sorted;  // Temporary vector to store the merged result
      int i = 0;  // Pointer for nums1
      int j = 0;  // Pointer for nums2

      // Merge elements from nums1 and nums2 until one of them is exhausted
      while (i < m && j < n)
      {
         if (nums1[i] < nums2[j])
         {
            sorted.push_back(nums1[i]);
            i++;
         }
         else if (nums1[i] > nums2[j])
         {
            sorted.push_back(nums2[j]);
            j++;
         }
         else
         {
            sorted.push_back(nums1[i]);
            i++;
         }
      }

      // Handle remaining elements from nums1 (if any)
      while (i < m) {
         sorted.push_back(nums1[i]);
         i++;
      }

      // Handle remaining elements from nums2 (if any)
      while (j < n) {
         sorted.push_back(nums2[j]);
         j++;
      }

      // Assign the merged result back to nums1
      nums1 = sorted;
   }
};
