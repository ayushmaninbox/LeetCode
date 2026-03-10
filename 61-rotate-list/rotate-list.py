# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
    
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        length = 1
        temp = head
        while temp.next:
            temp = temp.next
            length += 1

        k = k % length

        for _ in range(k):

            temp = head
            while temp.next.next:
                temp = temp.next

            end = temp.next
            temp.next = None
            end.next = head
            head = end

        return head