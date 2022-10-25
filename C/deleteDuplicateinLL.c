// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     struct ListNode *next;
//  * };
//  */


// struct ListNode* deleteDuplicates(struct ListNode* head){
//     if (head==NULL)
//         return head;
//     struct ListNode *p,*q;
//     p=head;
//     q=p->next;
//     while(q!=NULL)
//     {
//        if(p->val==q->val)
//        {
//             p->next=q->next;
          
//            free(q);
//            q=p->next;
//         }
//         else
//         {
//             p=p->next;
//             q=q->next;
//         }
          
//     }
//     return head;

// }