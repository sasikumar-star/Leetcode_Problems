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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL || head->next==NULL && head->val==val){
            return NULL;
        }
        ListNode *temp=new ListNode(0);
        temp->next=head;
        ListNode* curr=head;
        ListNode* prev=temp;
        while(curr!=NULL){
            if(curr->val==val){
                prev->next=curr->next;
            }
            else {
                prev=curr;
            }
            curr=curr->next;
        }
        return temp->next;
    }
};

