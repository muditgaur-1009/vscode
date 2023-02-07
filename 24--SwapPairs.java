public class No24_swapPairs {
    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
    public ListNode swapPairs(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        ListNode curr= head.next.next;
        ListNode prev=head;
        head=head.next;
        head.next=prev;
        while (curr!=null && curr.next!=null){
            prev.next= curr.next;
            prev = curr;
            ListNode next=curr.next.next;
            curr.next.next=curr;
            curr=next;
        }
        prev.next=curr;
        return head;
    }
}
