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
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {

        int start = k;
        int end = size(head) - k + 1;

        ListNode *start_node, *end_node;
        ListNode *current_node = head;
        int index = 1;

        while (current_node != NULL)
        {

            if (start == index)
            {
                start_node = current_node;
            }
            if (end == index)
            {
                end_node = current_node;
            }
            current_node = current_node->next;
            index++;
        }
        swap(start_node->val, end_node->val);
        return head;
    }
};