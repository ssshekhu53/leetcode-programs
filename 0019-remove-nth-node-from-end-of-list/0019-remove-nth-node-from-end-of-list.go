/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func removeNthFromEnd(head *ListNode, n int) *ListNode {
    nList := 0
    cur := head

    for cur != nil {
        nList++
        cur = cur.Next
    }

    targetNode := nList - n

    if targetNode <= 0 {
        if head != nil {
            head = head.Next
        }

        return head
    }

    cur = head
    prev := head

    for targetNode > 0 {
        targetNode--
        prev = cur
        cur = cur.Next
    }

    
    prev.Next = cur.Next

    return head
}