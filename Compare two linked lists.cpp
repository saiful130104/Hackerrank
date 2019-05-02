bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while(1)
    {
        if((head1->next==NULL) && (head2->next==NULL))
            return 1;
      if ((head1->next == NULL) || ( head2->next == NULL))
        return 0;
    if(head1-> data != head2->data)
        return 0;
    head1 = head1->next;
    head2 = head2->next;

    }
}