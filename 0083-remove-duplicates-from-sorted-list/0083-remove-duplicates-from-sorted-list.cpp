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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp =head;
        ListNode* nxtnod = NULL;
        while(temp != NULL && temp->next != nullptr){
           nxtnod = temp->next ;
          while(nxtnod != nullptr && nxtnod ->val == temp->val){
            nxtnod= nxtnod->next ;
          }
          temp -> next  = nxtnod;
       
          temp = temp->next;

        }
        return head;
    }
};