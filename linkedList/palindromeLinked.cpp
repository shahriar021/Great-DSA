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
        bool isPalindrome(ListNode* head) {
            
            ListNode* slow=head;
            ListNode* fast=head;
    
            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
            }
    
            ListNode* secondList=slow;
            ListNode* temp=nullptr;
            ListNode* p=nullptr;
    
            while(secondList){
                temp=secondList->next;
                secondList->next=p;
                p=secondList;
                secondList=temp;
            }
            while(p){
                if(p->val!=head->val){
                    return false;
                }
                p=p->next;
                head=head->next;
            }
            return true;
        }
    };