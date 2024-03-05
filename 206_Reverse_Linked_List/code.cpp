#include <iostream>


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
    ListNode* reverseList(ListNode* head) {
        // Being head = NULL-{1}-2-3-4-NULL
        ListNode* rev = NULL; // head = {NULL}-1-2-3-4-NULL & rev = NULL
        while (head != NULL) {
            ListNode* next = head->next; // head = NULL-{1}-2-3-4-NULL & next {2}-3-4-NULL
            head->next = rev; // head = NULL-{1}-NULL
            rev = head;
            head = next; // head = {2}-3-4-NULL
        }
        return rev;
    }
};