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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* curr;
        while(temp->next!=NULL){
            ListNode* newnode=new ListNode();
            newnode->val=gcd(temp->val,temp->next->val);
            curr=temp->next;
            temp->next=newnode;
            newnode->next=curr;
            temp=curr;
        }
        return head;
    }
};

