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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        ListNode* dummy=new ListNode(-1);
        ListNode* list3=dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                list3->next=list1;
                list1=list1->next;
            }
            else{
                list3->next=list2;
                list2=list2->next;
            }
            list3=list3->next;
        }
        if(list1!=NULL){
            list3->next=list1;
        }
        if(list2!=NULL){
            list3->next=list2;
        }
        return dummy->next;
    }
};