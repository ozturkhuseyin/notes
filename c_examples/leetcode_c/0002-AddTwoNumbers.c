/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *ret = NULL;
    ret = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *curr_ret = ret;
    
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry)
    {
        int sum = 0;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;
        curr_ret->val = sum % 10;
        
        curr_ret->next = (struct ListNode*) malloc(sizeof(struct ListNode));
        curr_ret = curr_ret->next;
    }
    curr_ret->next = NULL;
    
    // pop last element of the list
    struct ListNode *temp = ret;
    
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;

    return ret;
}