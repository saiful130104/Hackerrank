SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *tptr, *tail;
    if(head==NULL)
        return head;
    else
    {
        tptr = head;
        tail = head->next;
        while(tail!=NULL)
        {
            if(tptr->data!=tail->data)
            {
                tptr->next = tail;
                tptr = tail;
            }
            tail = tail->next;
        }
        tptr->next = tail;
    }
    return head;
}