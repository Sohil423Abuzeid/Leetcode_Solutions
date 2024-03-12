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
public class Solution {
    public ListNode RemoveNthFromEnd(ListNode head, int n) {
        ListNode a=head,b=head;
        int c=0;
        while(a!=null)
        {
            a=a.next;
            c++;
        }
        int d=1;
        b=head;
        while(d<c-n)
        {
            b=b.next;
            d++;
        }
        if(c==n)
        return head.next;
        else if(n==1)
        b.next=null;
        else
        b.next=b.next.next;
        return head;
    }
}