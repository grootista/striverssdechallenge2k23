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
// int getlength(ListNode* head)
// {
//     if(head==NULL)
//     return 0;
//     int len=0;
//     ListNode* temp=head;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     return len;

// }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // int leng=getlength(head);
        // if(leng==1 && n==1)
        // {
        //     head=NULL;
        //     return head;
        // }
        // if(leng==n)
        // {
        //     ListNode* cur=head;
        //     // int m=1;
        //     // while(cur->next!=NULL && m!=leng-1 )
        //     // {
        //     //     cur=cur->next;
        //     //     m++;
        //     // }
        //     //  nxt=cur->next;
        //     head=cur->next;
        //     cur->next=NULL;

        //     delete cur;
        //     return head;
        // }
        // int k=leng-n;
        // ListNode* temp=head;
        // while(temp->next!=NULL && k!= 1)
        // {
        //     temp=temp->next;
        //     k--;
        // }
        
        // if(k==1)
        // {
        //  ListNode* del=temp->next;
        // temp->next=del->next;
        // del->next=NULL;
        // delete del;
        // }
        
        
        // return head;
        ListNode *dummy=new ListNode();
        dummy->next=head;
        ListNode *slow=dummy;
        ListNode *fast=dummy;
        while(n--)
        {
            fast=fast->next;
        }
        if(fast->next==NULL)
        return slow->next->next;
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
        

    }
};
