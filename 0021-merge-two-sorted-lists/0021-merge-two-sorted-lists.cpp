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
    ListNode* mergeTwoLists(ListNode* i, ListNode* j) {
        if(i == nullptr && j == nullptr) return i;
        else if( i == nullptr ) return j;
        else if(j == nullptr) return i;
        ListNode*head ;
        if(i->val >= j->val){
            head = j;
            j = j->next;
        }
        else{
            head = i;
            i = i->next;
        }
        ListNode*newNode = head;
        while(i!= nullptr && j!= nullptr){
            if(i->val >= j->val){
                newNode->next = j;
                j = j->next;
            }
            else {
                newNode->next = i;
                i = i-> next;
            }
            newNode = newNode->next;
        }
        while(i != nullptr){
            newNode->next = i;
            i = i->next;
            newNode = newNode->next;
        }
        while(j != nullptr){
            newNode->next = j;
            j = j->next;
            newNode = newNode->next;
        }
        return head;
    }
};