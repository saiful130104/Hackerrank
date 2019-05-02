DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *current, *tmp;
    current = head;
    while(current!=NULL)
    {
        head = current;
        tmp = current->next;
        current->next = current->prev;
        current->prev = tmp;
        current = tmp;
    }
    return head;
}