/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
/*int leng(ListNode* node){
    if(node==NULL)
    return 0;
    int len=0;
    while(node!=NULL)
    {
        node=node->next;
        len++;
    }
    return len;
}*/
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
        return NULL;
        ListNode *tempA=headA;
        ListNode *tempB=headB;
    //     int Alen=leng(tempA);
    //     int Blen=leng(tempB);
    //     int red=abs(Alen-Blen);
    //     if(Alen>Blen)
    //     {
    //         while(red--)
    //         {
    //             tempA=tempA->next;
    //         }
    //     }
    //     else{
    //         while(red--)
    //         {
    //             tempB=tempB->next;
    //         }
    //     }
    //     while(tempA && tempB)
    //     {
    //         if(tempA==tempB)
    //         return tempA;

    //         tempA=tempA->next;
    //         tempB=tempB->next;
    //     }
        
    //  return NULL;   
    while(tempA!=tempB)
    {
        if(tempA==NULL)
        {
            tempA=headB;
        }
        else 
        {
             tempA=tempA->next;

        }
        if(tempB==NULL)
        {
            tempB=headA;
        }
       else
       {
        tempB=tempB->next;
       }
        

    }   
    return tempA;
    }
};
