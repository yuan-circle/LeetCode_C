/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /**********************************
 I don't creat any new node instead,I relink two list and take O(n) time.Faster than 100%.
 **********************************/
 
typedef struct ListNode ListNode;

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL){
        return l2;
    }
    else if(l2 == NULL){
        return l1;
    }
    ListNode * t1 = l1;
    ListNode * t2 = l2;
    ListNode * tmp = NULL;
    ListNode * head = NULL;
    if(l1->val < l2->val){
        tmp = l1;
        l1 = l1->next;
    }
    else{
        tmp = l2;
        l2 = l2->next;
    }
    head = tmp;
    while(l1 != NULL && l2 != NULL){
        if(l1->val < l2->val){
            tmp->next = l1;
            l1 = l1->next;
        }
        else{
            tmp->next = l2;
            l2 = l2->next;
        }
        tmp = tmp->next;
    }
    if(l1 == NULL){
        while(l2 != NULL){
            tmp->next = l2;
            l2 = l2->next;
            tmp = tmp->next;
        }
    }
    else{
        while(l1 != NULL){
            tmp->next = l1;
            l1 = l1->next;
            tmp = tmp->next;
        }
    }
    return head;
}
