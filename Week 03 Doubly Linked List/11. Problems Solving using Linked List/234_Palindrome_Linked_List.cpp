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
class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *new_node = new ListNode(val);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        tail = new_node;
    }

    void reverse(ListNode *&head, ListNode *current)
    {
        if (current->next == NULL)
        {
            head = current;
            return;
        }
        reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }
    bool isPalindrome(ListNode *head)
    {

        if (head == NULL)
        {
            return head;
        }

        ListNode *duplicate_head = NULL;
        ListNode *duplicate_tail = NULL;

        ListNode *temp = head;
        while (temp != NULL)
        {
            insert_tail(duplicate_head, duplicate_tail, temp->val);
            temp = temp->next;
        }

        reverse(duplicate_head, duplicate_head);
        temp = head;
        ListNode *duplicate_temp = duplicate_head;

        while (temp != NULL)
        {
            if (temp->val != duplicate_temp->val)
            {
                return false;
            }
            temp = temp->next;
            duplicate_temp = duplicate_temp->next;
        }
        return true;
    }
};