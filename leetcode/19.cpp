#include<bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head, *it = head, *deletedNode;
        int count = 0;
        while(it->next != NULL){
            it = it->next;
            if(count / n == 0) temp = it;
            count++;
        }
        deletedNode = temp->next;
        temp->next = temp->next->next;
        free(deletedNode);
        return head;
    }
