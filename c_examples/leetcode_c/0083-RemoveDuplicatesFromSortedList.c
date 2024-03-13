/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL) {return head;}
    struct ListNode* curr = head;
    
    while (curr != NULL)
    {   
        if (curr->next == NULL) {break;}
        if (curr->val == curr->next->val && curr->next != NULL) {
            struct ListNode* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }    
    }

    return head;
}
