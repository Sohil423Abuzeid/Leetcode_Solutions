/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution
{
    ListNode temp;
    bool test (ListNode a)
    {
        if (a == null) return true;
        bool ans =  test(a.next)&&(a.val == temp.val) ;
        temp = temp.next;
        return ans;
    }
    public bool IsPalindrome(ListNode head)
    {
        temp = head;
        return test(head);
    }
}