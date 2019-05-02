DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *nptr = (DoublyLinkedListNode*) malloc(sizeof(DoublyLinkedListNode));
    nptr->next=NULL;
    nptr->prev=NULL;
    nptr->data=data;
    if(head == NULL)
    {
        head = nptr;
        return head;
    }
    DoublyLinkedListNode *tptr;
    tptr = head;
    if(tptr->data>data)
    {
        nptr->next = head;
        head->prev=nptr;
        head = nptr;
        return head;
    }
    while(tptr->next!= NULL)
    {
        if(tptr->next->data>nptr->data)
        {
            if(head==NULL)
            {
                nptr->next = head;
                head->prev = nptr;
                head = nptr;
                return head;
            }
            nptr->next = tptr->next;
            nptr->prev = tptr->prev;
            tptr->next = nptr;
            return head;
        }
        tptr = tptr->next;
    }
    tptr->next = nptr;
    nptr->prev = tptr;
    tptr = nptr;
    return head;

}