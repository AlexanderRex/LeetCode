/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   // Function to find the middle node of a singly-linked list.
   ListNode* middleNode(ListNode* head) {
      ListNode* slow = head, * fast = head;

      // Using the two-pointer approach to find the middle node.
      // The 'slow' pointer moves one step at a time, while the 'fast' pointer moves two steps at a time.
      // When the 'fast' pointer reaches the end, the 'slow' pointer will be at the middle node.
      while (fast != nullptr && fast->next != nullptr)
      {
         slow = slow->next;
         fast = fast->next->next;
      }
      return slow; // Return the middle node of the linked list.
   }
};
