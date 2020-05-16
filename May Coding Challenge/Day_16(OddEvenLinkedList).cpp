class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        //Boundary cases
        if(!head)
            return head;
        
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *odd_head = head;
        ListNode *even_head = head->next;
        
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_head;        
        return head;
    }
};
