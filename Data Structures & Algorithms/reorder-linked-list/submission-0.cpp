class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;  // Edge case: empty or single element list

        ListNode* first = head;
        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Use the slow and fast pointer technique to find the middle of the list
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        slow->next = nullptr;  // Cut the list into two halves
        while (curr != nullptr) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        // Step 3: Merge the two halves
        ListNode* second = prev;  // The head of the reversed second half
        while (second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
