SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
  SinglyLinkedListNode *tptr,*hd=NULL,*nptr;
    while(1)
    {
        if(head1 == NULL)
            nptr = head2;
        else if(head2 == NULL)
            nptr = head1;
        else if(head1->data<=head2->data)
        {
            nptr = head1;
            head1 = head1->next;
        }
        else
        {
            nptr = head2;
            head2 = head2->next;
        }
        if(hd==NULL)        
        {
            hd = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }
        if((head1==NULL) || (head2==NULL))
            break;
    }
    if(head1==NULL)
    {
        tptr ->next = head2;
    }
    else
        tptr ->next = head1;
    return hd;
}