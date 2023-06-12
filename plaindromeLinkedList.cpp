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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* dummy=NULL;
        while(head)
        {
            ListNode *nextNode=head->next;
            head->next=dummy;
            dummy=head;
            head=nextNode;
            


        }
        return dummy;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow;
       // slow=NULL;
        mid=reverse(mid);
        while(head!=NULL&&mid!=NULL)
        {
            if(head->val!=mid->val)
            return false;
            head=head->next;
            mid=mid->next;
        }
        return true;

        
    }
};
