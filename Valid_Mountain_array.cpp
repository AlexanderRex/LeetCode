#include <vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
   int n = arr.size();

   // Check if the array has less than 3 elements
   if (n < 3)
   {
      return false;
   }

   int i = 0;

   // Check the increasing part of the array
   while (i + 1 < n && arr[i] < arr[i + 1])
   {
      i++;
   }

   // Peak not found or located at first/last element
   if (i == 0 || i == n - 1)
   {
      return false;
   }

   // Check the decreasing part of the array
   while (i + 1 < n && arr[i] > arr[i + 1])
   {
      i++;
   }

   return i == n - 1;
}
