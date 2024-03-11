/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public bool HasCycle(ListNode head)
{
    Dictionary<ListNode,bool> visited = new Dictionary<ListNode,bool>();
    while (head != null)
    {
        if(visited.ContainsKey(head)) return true;
        visited[head] = true;
        head=head.next;
    }
    return false;
}
}