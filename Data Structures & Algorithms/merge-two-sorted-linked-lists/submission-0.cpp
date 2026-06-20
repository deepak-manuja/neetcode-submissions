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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* newll;
        if(temp1==NULL) return list2;
        if(temp2==NULL) return list1;
        if(temp1->val<=temp2->val)
        {
            newll = new ListNode(temp1->val);
            temp1=temp1->next;
        }
        else
        {
            newll = new ListNode(temp2->val);
            temp2=temp2->next;
        }

        ListNode* curr = newll;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<=temp2->val)
            {
                curr->next = new ListNode(temp1->val);
                curr = curr->next;
                temp1=temp1->next;
            }
            else
            {
                curr->next = new ListNode(temp2->val);
                curr = curr->next;
                temp2=temp2->next;
            }
        }

        while(temp1!=NULL)
        {
            curr->next = new ListNode(temp1->val);
            curr = curr->next;
            temp1=temp1->next;
        }

        while(temp2!=NULL)
        {
            curr->next = new ListNode(temp2->val);
            curr = curr->next;
            temp2=temp2->next;
        }

        return newll;

    }
};