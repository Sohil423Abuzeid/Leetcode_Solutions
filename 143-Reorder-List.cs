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
    public void ReorderList(ListNode head)
{
    int []arr= new int[50005];
    int cnt=0;
    ListNode a=head;
    while (head != null) {
        arr[cnt] = head.val;
        cnt++;
        head= head.next;
    }
    head =a;
    int i = 1, o = cnt - 1;
    while (i < o)
    {
        head=head.next;
        head.val=arr[o];
        head =head.next;
        head.val=arr[i];
        i++;
        o--;
    }
    if(cnt%2==0)head.next.val=arr[i];
}
}