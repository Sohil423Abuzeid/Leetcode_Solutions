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
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2)
{
    ListNode temp = new ListNode((l1.val + l2.val) % 10), ans = temp;
    int temp2 = (l1.val + l2.val) / 10;
    while (l1.next != null||l2.next!=null)
    {
        int v1=0, v2=0;
        if (l1.next != null)
        { l1 = l1.next; v1 = l1.val; }
        if (l2.next != null)
        { l2 = l2.next; v2 = l2.val; }
        temp2 += (v1 + v2);
        temp.next=new ListNode(temp2%10);
        temp2 /= 10;
        temp=temp.next;        
    }
    while (temp2 != 0)
    {
        temp.next = new ListNode(temp2 % 10);
        temp2 /= 10;
        temp = temp.next;
    }
    return ans; 
}
   
}