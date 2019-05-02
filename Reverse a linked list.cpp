SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    vector<int>v;
    while(head!=NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    SinglyLinkedListNode *Head=NULL, *tail=NULL;
    for (int i = v.size()-1; i >=0; i--) {
      SinglyLinkedListNode *nptr =
          (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
      nptr->data = v[i];
      nptr->next = NULL;
      if (Head == NULL) {
        Head = nptr;
        tail = nptr;
      } else {
        tail->next = nptr;
        tail = nptr;
      }
    }
    return Head;
}
