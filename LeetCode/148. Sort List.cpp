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
    
    ListNode* merge(ListNode* a, ListNode* b)
    {
        ListNode* temp = new ListNode();
        ListNode* resList = temp;
        while(a != NULL && b != NULL)
        {
            if(a->val < b->val)
            {
                temp->next = a;
                a = a->next;
            }
            else
            {
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }
        temp->next = (a == NULL) ? b : a ;
        
        return resList->next;
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next ==NULL)
            return head;
     
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = slow->next;
        slow->next = NULL;
        
        return merge(sortList(head),sortList(fast));
    }
    
};