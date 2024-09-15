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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *dummy_node = new ListNode(0);
        ListNode *new_current_node = dummy_node;
        ListNode *current_node = head;

        while (true)
        {
            int sum = 0;
            while (current_node->next != NULL && current_node->next->val != 0)
            {
                current_node = current_node->next;
                sum += current_node->val;
            }

            new_current_node->next = new ListNode(sum);
            new_current_node = new_current_node->next;
            current_node = current_node->next;

            if (current_node->next == NULL)
            {
                break;
            }
        }

        ListNode *new_head = dummy_node->next;
        delete dummy_node;
        return new_head;
    }
};