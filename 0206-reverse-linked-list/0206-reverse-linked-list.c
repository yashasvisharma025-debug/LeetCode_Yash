// defining structure of singly linked lis [pre-defined in leetcode]
/*struct ListNode{
    int val;
    struct ListNode* next;*/

#include <stdio.h>
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* previous=NULL;
    struct ListNode* current=head;
    struct ListNode* next=NULL;

    while (current!=NULL){
        next= current->next; //saves rest of the list
        current->next=previous; //reverses the arrow
        previous=current; //moves pointer forward from previous to current
        current=next; //moves pointer forward from current to next
    }
    
    return previous;
}


/*NOTES:
1. struct ListNode*-- return type of function; return a memory address pointer pointing to a node structure
2. struct ListNode* head-- function accepts a pointer variable named head, which holds the memory location of the very first node in the linked list.
3. pointer variable named previous=NULL [point to absolutely nothing]
4. a pointer variable named current [node we are actively working on]=head [Starts it off by pointing to the exact same memory address as the incoming head node]
5. a temporary pointer variable named next; safely hold onto the rest of the list before we chop up the connections
6. next=current->next; saves the location of the next node in line so we don't lose it in next variable
7. current-> next=previous; reverses the arrow pointer
8. previous=current; Move our previous pointer one step forward by assigning it to the node current is currently standing on
9. current=next; Move our current pointer one step forward by assigning it to the node next held
10. When the loop finishes current hits NULL, previous will be standing perfectly on the very last node of the original list
11. a structure (defined using struct keyword) is a tool that lets you create your own custom data type by packing different variables together into a single package.
space complexity: O(1)
time complexity: O(n)
*/