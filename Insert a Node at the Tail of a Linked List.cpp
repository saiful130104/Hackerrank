SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

  SinglyLinkedListNode *nptr = (SinglyLinkedListNode *) malloc(sizeof          (SinglyLinkedListNode));
  nptr->data = data;
  nptr->next = NULL;
  if (head == NULL)
  {
    head = nptr;
    }
    else
    {
      SinglyLinkedListNode *tptr = head;
      while(tptr->next!=NULL)
      {
          tptr = tptr->next;
      }
      tptr->next = nptr;
    }
    return head;
}