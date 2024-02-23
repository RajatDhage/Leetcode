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
    ListNode* reverse_mid(ListNode* head){
        ListNode* prev_p = NULL;
        ListNode* current_p = head;
        ListNode* next_p;
       
       //step 2
        while(current_p) {

            next_p = current_p->next;
            current_p->next = prev_p;
            
            prev_p = current_p;
            current_p = next_p;
        }

        head = prev_p; //step 3
        return head;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* f = slow->next;
        slow->next = NULL;

        ListNode* right = reverse_mid(f);
        ListNode* left = head;

        while(right){
            ListNode* temp1 = left->next;
            ListNode* temp2 = right->next;

            left->next = right;
            right->next = temp1;
            left = temp1;
            right = temp2;
        }
    }
};