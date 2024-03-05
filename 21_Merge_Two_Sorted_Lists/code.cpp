#include <iostream>
#include <algorithm>


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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if (list1 == NULL) return list2;
            if(list2 == NULL) return list1;
            if (list1->val > list2->val) {
                std::swap(list1,list2);
            }
            ListNode* result = list1;
            ListNode* temp = NULL;
            while (list1 != NULL && list2 != NULL) {
                if (list1->val <= list2->val){
                    temp = list1;
                    list1 = list1->next;
                    continue;
                }
                temp -> next = list2;
                std::swap(list1, list2);
            }
            while (list1 != NULL){
                temp->next = list1;
                temp = list1;
                list2 = list2->next;
            }
            while (list2 != NULL){
                temp->next = list2;
                temp = list2;
                list2 = list2 ->next;
            }
            return result;
        }
};
