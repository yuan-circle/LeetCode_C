/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /**********************
 The anser is taking the solution on the leetcode as reference,which ideas is that making a pointer who's next points to head
 which called start,then creat two pointer points to the start,one called front,second called back.then front goes n+1 node so
 the distance between front and back is n,and they begin to pass the node until front is arrive at the end,then the back is
 the target to delete,and it's do one times to go through the node!
***********************/
 
typedef struct ListNode ListNode;
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    ListNode * start = (ListNode*)malloc(sizeof(ListNode));
        start->val = 0;
        start->next = head;
        ListNode * front = start;
        ListNode * back = start;
        for(int i = 0;i < n+1;i++){
            front = front->next;
        }
        while(front!= NULL){
            front = front->next;
            back = back->next;
        }
        back->next = back->next->next;
        return start->next;
}
