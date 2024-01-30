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
    ListNode* middleNode(ListNode* head) {
       int counter=0;
       ListNode* flag =head;
       while(flag)
       {
           counter++;
           flag =flag->next;
       }
       counter =counter /2;
       while(counter--)
       head = head->next;
       return head;
    }
};