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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        int n=1;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        //1. find k for large number of nodes
        k=k%n;
        //2. make temp point to head;
        temp->next=head;
        //3. find the n-k
        temp=head;
        for(int i=1;i<(n-k);i++){
            temp=temp->next;
        }
        //4.point the new head to (n-k+!)
        ListNode* newhead=temp->next;
        //5.point the n-k th node to NULL
        temp->next=NULL;
        return newhead;
    }
};