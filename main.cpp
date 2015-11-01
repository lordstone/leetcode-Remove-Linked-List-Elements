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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        ListNode* tmp = new ListNode(0);
        tmp -> next = head;
        ListNode* cur = head;
        ListNode* last = tmp;
        while(cur != NULL){
            if(cur -> val == val){
                last -> next = cur -> next;
                cur = cur -> next;
            }else{
                last = cur;
                cur = cur -> next;
            }
        }//end while
        return tmp -> next;
    }
};
