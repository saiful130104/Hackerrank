SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
  SinglyLinkedListNode *nptr = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
  nptr->data = data;
  nptr->next = NULL;
  if(llist == NULL)
  {
      llist = nptr;
  }
  else
  {
      nptr->next = llist;
      llist = nptr;
  }
  return llist;
}
