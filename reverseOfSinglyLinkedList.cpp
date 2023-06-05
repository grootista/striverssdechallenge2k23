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
    ListNode* reverseList(ListNode* head) {
        // if(head==NULL || head->next==NULL)
        // return head;
        // ListNode* prev;
        // ListNode* cur;
        // prev=NULL;
        // cur=NULL;
        // while(head)
        // {
        //     cur = head->next;
        //     head->next=prev;
        //     prev=head;
        //     head=cur;
        // }
        // head=prev;
        // return head;

        ListNode* dummy=NULL;
        while(head!=NULL)
        {
            ListNode* next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
        return dummy;
         
    }
};
