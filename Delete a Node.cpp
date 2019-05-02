SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
  SinglyLinkedListNode *tptr;
    int cnt=1;
    if(position == 0)
    {
        return head->next;
    }
    else
    {
        tptr = head;
      while (cnt < position) 
      {
          tptr=tptr->next;
          cnt++;
      }
      SinglyLinkedListNode* tptr2 = tptr->next;
      tptr->next = tptr->next->next;
      delete(tptr2);
    }
    return head;   
}