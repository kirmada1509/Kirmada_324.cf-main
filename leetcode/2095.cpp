#include<bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteMiddle(ListNode* head) {
    if(head->next == NULL){
        return NULL;
    }
    ListNode *l = head, *r = head->next;
    int count = 2;
    while(r->next != NULL){
        r = r->next;
        count++;
        if((count + 1) % 2 == 0){
            l = l->next;
        }
    }
    l->next = l->next->next;
    return head;
}

