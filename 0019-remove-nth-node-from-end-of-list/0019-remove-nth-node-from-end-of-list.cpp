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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 1;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }

        int cnt = len-n;
        int i=0;
        if(cnt==0 && len==1)
        {
            head = NULL;
            return head;
        }
        ListNode* tmp = head;
        if(len-n==0)
        {
            tmp = tmp->next;
            return tmp;
        }
        while(tmp!=NULL && i<cnt-1)
        {
            tmp=tmp->next;
            i++;
        }
        if(tmp->next!=NULL){
            ListNode* a = tmp->next;
            ListNode* b = a->next;
            tmp->next = b;
            delete a;
        }

        return head;
    }
};